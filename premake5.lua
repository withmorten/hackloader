workspace "hackloader"
	configurations { "Release", "Debug" }

	location "build"
	targetdir "bin/%{cfg.buildcfg}"

	characterset ("MBCS")
	toolset ("v141_xp")
	staticruntime "on"
	links { "legacy_stdio_definitions" }
	defines { "WIN32_LEAN_AND_MEAN", "VC_EXTRALEAN", "WIN32_LEAN_AND_MEAN", "_CRT_SECURE_NO_WARNINGS", "_CRT_NONSTDC_NO_DEPRECATE", "_USE_32BIT_TIME_T" }

	files { "src/hackloader.cpp" }
	files { "src/hackloader.h" }
	files { "src/util.cpp" }
	files { "src/util.h" }

	filter "configurations:Debug"
		defines { "DEBUG" }
		symbols "full"
		optimize "off"
		runtime "debug"

	filter "configurations:Release"
		defines { "NDEBUG" }
		symbols "on"
		optimize "speed"
		runtime "release"
		flags { "LinkTimeOptimization" }

project "dsound"
	kind "SharedLib"
	targetname "dsound"

	defines { "DLL_NAME=\"" .. "dsound" .. "\"" }

	files { "src/dsound.cpp" }
	files { "src/dsound.def" }

project "dinput8"
	kind "SharedLib"
	targetname "dinput8"

	defines { "DLL_NAME=\"" .. "dinput8" .. "\"" }

	files { "src/dinput8.cpp" }
	files { "src/dinput8.def" }

project "iphlpapi"
	kind "SharedLib"
	targetname "iphlpapi"

	defines { "DLL_NAME=\"" .. "iphlpapi" .. "\"" }

	files { "src/iphlpapi.cpp" }
	files { "src/iphlpapi.def" }

project "winmm"
	kind "SharedLib"
	targetname "winmm"

	defines { "DLL_NAME=\"" .. "winmm" .. "\"" }

	files { "src/winmm.cpp" }
	files { "src/winmm.def" }
