#pragma once
//将main函数藏在引擎部分，用户写个类给引擎就完事，前提是要满足define的条件

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel onlt supports windows!
#endif
