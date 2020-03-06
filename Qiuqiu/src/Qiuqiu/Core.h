#pragma once

#ifdef QIUQIU_PLATFORM_WINDOWS
    #ifdef QIUQIU_BUILD_DLL
       #define QIUQIU_API __declspec(dllexport)
    #else
       #define QIUQIU_API __declspec(dllimport)

    #endif
#else
    #error Qiuqiu only support Windows!

#endif 