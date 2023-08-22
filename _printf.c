#include "main.h"
/**
 * _printf - print function
 * @format: char string
 * Returns: printed characters
 */

int _printf(const char *format, ...)
{
	int print = 0;

	va_list n;

	if (format == '\0')
	{
		return (-1);
	}

	va_start(n, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print++;
		}
		else
		{
			format++;
		}
		if (format == 'c' || format == 's' || format == '%')
		{
			int x = va_arg(n, int);
		}

			write(1, x, strlen(x));
			va_end(n);
	}
}
