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

	if (format == NULL)
		return (-1);
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
				print_c(content, &trace);
			}
			else if (*format == 's')
			{
				print_s(content, &trace);
			}
			else if (*format == 'd' || *format == 'i')
			{
				print_di(content, &trace);
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
