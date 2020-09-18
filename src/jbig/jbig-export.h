#ifndef JBIG_EXPORT_H
#define JBIG_EXPORT_H

#if defined _WIN32 || defined __CYGWIN__
    #ifdef JBIG_BUILD
        #define JBIG_EXPORT __declspec(dllexport)
    #else
        #define JBIG_EXPORT __declspec(dllimport)
    #endif

    #define JBIG_HIDDEN
#else
    #define JBIG_EXPORT __attribute__((visibility("default")))
    #define JBIG_HIDDEN __attribute__((visibility("hidden")))
#endif

#endif
