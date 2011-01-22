
#ifndef math3d_h
#define math3d_h 1

#include "math3d/core/export.h"
#include "math3d/core/math3d_plugin.h"


namespace math3d {
    const int SSE_IMPLEMENTATION = 1;
    const int SSE3_IMPLEMENTATION = 3;
    const int DEFAULT_IMPLEMENTATION = 0;

    extern "C" {
        EXPORT math3dImplementation * getCurrent();
        EXPORT math3dImplementation * getImplementation(int whichImplementation);
        EXPORT math3dImplementation * getBestImplementation();
        EXPORT void * aligned_malloc(size_t size, size_t align);
        EXPORT void aligned_free(void * ptr);
        EXPORT void printCPUInfo();

        // internal use
        EXPORT void * internal_malloc(size_t, size_t);
        EXPORT void internal_free(void *);
    }
}
#endif

