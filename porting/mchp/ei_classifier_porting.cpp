#include <cstdlib>
#include <cstdio>
#include <cstdarg>
#include "../ei_classifier_porting.h"


__attribute__((weak)) EI_IMPULSE_ERROR ei_run_impulse_check_canceled() {
    return EI_IMPULSE_OK;
}

__attribute__((weak)) EI_IMPULSE_ERROR ei_sleep(int32_t us) {
    /* Optional: implement sleep */
    return EI_IMPULSE_OK;
}

__attribute__((weak)) uint64_t ei_read_timer_ms() {
    /* Optional: implement ms timer */
    return 0;
}

__attribute__((weak)) uint64_t ei_read_timer_us() {
    /* Optional: implement us timer */
    return 0;
}

__attribute__((weak)) void ei_printf(const char *format, ...) {
    va_list myargs;
    va_start(myargs, format);
    vprintf(format, myargs);
    va_end(myargs);
}

__attribute__((weak)) void ei_printf_float(float f) {
    ei_printf("%f", f);
}

__attribute__((weak)) void *ei_malloc(size_t size) {
    return malloc(size);
}

__attribute__((weak)) void *ei_calloc(size_t nitems, size_t size) {
    return calloc(nitems, size);
}

__attribute__((weak)) void ei_free(void *ptr) {
    free(ptr);
}

#if defined(__cplusplus) && EI_C_LINKAGE == 1
extern "C"
#endif
__attribute__((weak)) void DebugLog(const char* s) {
    ei_printf("%s", s);
}

extern "C" int _open (const char *buf, int flags, int mode)
{
    return 0;
}