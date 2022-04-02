#pragma once

#include <Windows.h>
#include <stdio.h>
#include <direct.h>
#include <stdint.h>

typedef int32_t ssize_t;
#include "util.h"

#define jmp(a) { __asm jmp a }

extern HMODULE fake_dll;
void init_fake_dll();
