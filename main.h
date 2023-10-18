#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_c(va_list content, int *trace);
void print_s(va_list content, int *trace);
int _isdigit(char c);
int print_di(int number);
void print_b(unsigned int n, int *trace);

#endif

