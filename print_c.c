#include "main.h"

/**
 * print_c - is a function that prints a character
 * It also increments value pointed to by 'trace'
 *
 * @content: holds a variable number of arguments
 * @trace: a pointer to the integer for tracking
 **/

void print_c(va_list content, int *trace)
{
	int c = va_arg(content, int);

	_putchar(c);
	(*trace)++;
}
