#pragma once
//��main�����������沿�֣��û�д�������������£�ǰ����Ҫ����define������

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel onlt supports windows!
#endif
