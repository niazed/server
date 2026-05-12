#pragma once

#ifndef PLATFORM_HEADER

#define PLATFORM_HEADER

#if defined(WIN32)
    #include <windows.h>
#elif defined(__unix__)
    #include <unistd.h>
#endif

#endif