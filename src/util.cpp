#include <string.h>
#include <ctype.h>
#include <stdint.h>

typedef int32_t ssize_t;
#include "util.h"

struct word_at_a_time
{
	const uintptr_t one_bits, high_bits;
};

static inline uintptr_t read_word_at_a_time(const void *addr)
{
	return *(uintptr_t *)addr;
}

static inline uintptr_t has_zero(uintptr_t a, uintptr_t *bits, const word_at_a_time *c)
{
	uintptr_t mask = ((a - c->one_bits) & ~a) & c->high_bits;
	*bits = mask;
	return mask;
}

static inline uintptr_t prep_zero_mask(uintptr_t a, uintptr_t bits, const word_at_a_time *c)
{
	return bits;
}

static inline uintptr_t create_zero_mask(uintptr_t bits)
{
	bits = (bits - 1) & ~bits;
	return bits >> 7;
}

static inline intptr_t count_masked_bytes(intptr_t mask)
{
	intptr_t a = (0x0ff0001 + mask) >> 23;
	return a & mask;
}

static inline uintptr_t find_zero(uintptr_t mask)
{
	return count_masked_bytes(mask);
}

ssize_t strscpy(char *dest, const char *src, size_t count)
{
	ssize_t res = 0;

	const word_at_a_time constants = { 0x01010101, 0x80808080 };
	const size_t page_size = 1 << 12;

	size_t max = count;

	if ((intptr_t)src & (sizeof(intptr_t) - 1))
	{
		size_t limit = page_size - ((intptr_t)src & (page_size - 1));

		if (limit < max) max = limit;
	}

	while (max >= sizeof(uintptr_t))
	{
		uintptr_t c, data;

		c = read_word_at_a_time(src + res);

		if (has_zero(c, &data, &constants))
		{
			data = prep_zero_mask(c, data, &constants);
			data = create_zero_mask(data);
			*(uintptr_t *)(dest + res) = c & data;
			return res + find_zero(data);
		}

		*(uintptr_t *)(dest + res) = c;

		res += sizeof(uintptr_t);
		count -= sizeof(uintptr_t);
		max -= sizeof(uintptr_t);
	}

	while (count)
	{
		char c = src[res];
		dest[res] = c;

		if (!c) return res;

		res++;
		count--;
	}

	if (res) dest[res - 1] = '\0';

	return -1;
}

ssize_t strsncpy(char *dest, const char *src, size_t count)
{
	ssize_t written = strscpy(dest, src, count);

	if (written < 0 || written == count - 1) return written;

	memset(dest + written + 1, 0, count - written - 1);

	return written;
}

char *strscat(char *dest, const char *src, size_t dest_size)
{
	if (!dest_size) return dest;

	size_t dest_content_len = strlen(dest);

	if ((dest_size - dest_content_len) <= 0) return dest;

	return strscpy(dest + dest_content_len, src, dest_size - dest_content_len) < 0 ? NULL : dest + dest_content_len;
}

ssize_t strscpychr(char *dest, const char *src, char end, size_t count)
{
	ssize_t res = 0;

	while (count)
	{
		char c = src[res];

		if (c == end)
		{
			dest[res] = '\0';
			return res;
		}

		dest[res] = c;

		if (!c) return res;

		res++;
		count--;
	}

	if (res) dest[res - 1] = '\0';

	return -1;
}

char *strtok_r(char *string, const char *control, char **nextoken)
{
	uint8_t *str;
	uint8_t *ctrl = (uint8_t *)control;

	uint8_t map[32];
	memset(map, 0, sizeof(map));

	do
	{
		map[*ctrl >> 3] |= (1 << (*ctrl & 7));
	}
	while (*ctrl++);

	if (string) str = (uint8_t *)string;
	else str = (uint8_t *)*nextoken;

	while ((map[*str >> 3] & (1 << (*str & 7))) && *str) str++;

	string = (char *)str;

	for (; *str; str++)
	{
		if (map[*str >> 3] & (1 << (*str & 7)))
		{
			*str++ = '\0';

			break;
		}
	}

	*nextoken = (char *)str;

	if ((uint8_t *)string == str) return NULL;
	else return string;
}

char *stristr(const char *str1, const char *str2)
{
	char *cp = (char *)str1;
	char *s1;
	char *s2;

	if (!*str2) return (char *)str1;

	while (*cp)
	{
		s1 = cp;
		s2 = (char *)str2;

		while (*s1 && *s2 && !(tolower(*s1) - tolower(*s2)))
		{
			s1++;
			s2++;
		}

		if (!*s2) return cp;

		cp++;
	}

	return NULL;
}
