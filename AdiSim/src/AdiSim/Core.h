#pragma once

#ifdef AS_PLATFORM_WINDOWS
	#ifdef AS_BUILD_DLL
		#define ADISIM_API __declspec(dllexport)
	#else
		#define ADISIM_API __declspec(dllimport)
	#endif
#else
	#error  AdiSim only supports Windows
#endif