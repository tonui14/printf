#include "main.h"

void print_s(const char *str, int *trace)
{
    while (*str) {
        _putchar(*str);
        str++;
        trace++;
    }
}
