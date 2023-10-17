#include "main.h"

void print_di(va_list content, int *trace)
{
	int number = va_arg(content, int);
	 _putchar(number);
	(*trace)++;
}
