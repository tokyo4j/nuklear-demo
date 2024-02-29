#include <stdlib.h>
#include <string.h>
#define NK_MEMSET memset
#define NK_MEMCPY memcpy
#define NK_DTOA nk_dtoa
extern char *nk_dtoa(char *s, double n);