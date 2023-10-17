#include "main.h"

/**
 * print_c - is a function that prints a character
 * It also increments value pointed to by 'trace'
 *
 * @c: character to be printed
 * @trace: a pointer to the integer for tracking
 **/

void print_c(char c, int *trace)
{
	_putchar(c);
	(*trace)++;
}
