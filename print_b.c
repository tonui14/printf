#include "main.h"

/**
 * print_b - print binary rep of unsigned int
 *
 * @n: the unsigned integer to be converted in binary
 * @trace: a pointer to an integer
 **/

void print_b(unsigned int n, int *trace)
{
	char buffer[32];
	int i;

	for (i = 31; i >= 0; i--)
	{
		int bits = (n >> i) & 1;

		buffer[31 - i] = bits + '0';
	}

	for (i = 0; i < 32; i++)
	{
		_putchar(buffer[i]);
		(*trace)++;
	}
}
