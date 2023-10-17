#include "main.h"

/**
 * print_s - prints a string to the output
 * @str: a pointer to the null terminated string
 * @trace: a pointer to an integer
 *
 **/

void print_s(const char *str, int *trace)
{
	while (*str)

	{
		_putchar(*str);
		str++;
		(*trace)++;
	}
}
