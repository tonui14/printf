#include "main.h"

/**
 * print_s - prints a string to the output
 * @str: a pointer to the null terminated string
 * @trace: a pointer to an integer
 *
 **/

void print_s(va_list content, int *trace)
{
	char *word = va_arg(content, char *);
	while (*word)
	{
		_putchar(*word);
		(*trace)++;
		word++;
	}
}
