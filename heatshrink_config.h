#ifndef HEATSHRINK_CONFIG_H
#define HEATSHRINK_CONFIG_H

#include <rtthread.h>

/* Should functionality assuming dynamic allocation be used? */
#ifndef HEATSHRINK_DYNAMIC_ALLOC
#define HEATSHRINK_DYNAMIC_ALLOC 1
#endif

#if HEATSHRINK_DYNAMIC_ALLOC
    /* Optional replacement of malloc/free */
    #define HEATSHRINK_MALLOC(SZ)  rt_malloc(SZ)
    #define HEATSHRINK_FREE(P, SZ) rt_free(P)
#else
    /* Required parameters for static configuration */
    #define HEATSHRINK_STATIC_INPUT_BUFFER_SIZE 32
    #define HEATSHRINK_STATIC_WINDOW_BITS 8
    #define HEATSHRINK_STATIC_LOOKAHEAD_BITS 4
#endif

/* Turn on logging for debugging. */
#ifdef HEATSHRINK_USING_LOGS
#define HEATSHRINK_DEBUGGING_LOGS 1
#else
#define HEATSHRINK_DEBUGGING_LOGS 0
#endif

/* Use indexing for faster compression. (This requires additional space.) */
#define HEATSHRINK_USE_INDEX 1

#endif
