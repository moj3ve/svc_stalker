#ifndef HANDLE_SVC_HOOK
#define HANDLE_SVC_HOOK

#define STACK                       (0x200)

#define NUM_CACHED_PTRS             (4)
#define NUM_INSTRS_BEFORE_CACHE     (9)
/* offset of start of cached kernel pointers */
#define CACHE_START                 (-((4*NUM_INSTRS_BEFORE_CACHE)+(8*NUM_CACHED_PTRS)))
/* cache offsets */
#define EXCEPTION_TRIAGE_CACHEOFF   (0x0)
#define CURRENT_PROC_CACHEOFF       (0x8)
#define PROC_PID_CACHEOFF           (0x10)
#define FILTER_MEM_CACHEOFF         (0x18)

/* local variables */
#define OFFSET_CACHE_PTR            (STACK-0x70)
#define EXCEPTION_TRIAGE_FPTR       (STACK-0x78)
#define CURRENT_PROC_FPTR           (STACK-0x80)
#define PROC_PID_FPTR               (STACK-0x88)
#define FILTER_MEM_PTR              (STACK-0x90)
#define SAVED_STATE_PTR             (STACK-0x98)
#define EXC_CODES                   (STACK-0xa0)    /* XXX array of 2 uint64_t */

/* exception stuff */
#define EXC_SYSCALL                 (7)


#endif