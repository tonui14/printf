#include "main.h"

int print_di(int number)
{
	char buffer[32];
	int output = 0, i = 0, j;

	if (number < 0)
	{
		_putchar('-');
		output++;
		number = -number;
	}

	do
	{
		buffer[i++] = '0' + (number % 10);
		number /= 10;
		output++;
	} while (number > 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}

	return (output);
}
