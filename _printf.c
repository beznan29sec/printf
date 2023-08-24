#include "main.h"
/**
 * _printf - print function
 * @format: Character string
 * Return: Printed characters
 */


int _printf(const char *format, ...)
{
	int print = 0;
	va_list n;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(n, format);

	while (*format)
	{
		if (format != '%')
		{
			write(1,  format, 1);
			print++;
		}
		else
		{
			format++;
		}
		if (format == '\0')
		{
			break;
		}
		if (*format == '%')
		{
			write(1, format, 1);
			print++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(n, int);
			write(1, &c, 1);
			print++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(n, char*);
			write(1, &str, strlen(str));
			print += str;
		}
		format++;
	}
	va_end(n);
	return (print);
}
