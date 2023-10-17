#include "main.h"

/**
 * _printf - is the function for custom printf
 * @format: this is the pointer to a character
 * @...: is the variable arguments
 * Return: Always trace
 */

int _printf(const char *format, ...)
{
	int trace = 0;
	va_list content;

	va_start(content, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				trace++;
			}
			else if (*format == 'c')
			{
				int character = va_arg(content, int);

				_putchar(character);
				trace++;
			}
			else if (*format == 's')
			{
				char *word = va_arg(content, char*);

				print_s(word, &trace);
			}
		}
		else
		{
			_putchar(*format++);
			trace++;
		}
	}
	va_end(content);
	return (trace);
}
