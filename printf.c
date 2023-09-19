#include "main.h"
#include <stdarg.h>
/**
 * _printf - a function that produces out[ut according to a format
 *
 * @format: the format to be followed while printing
 * Return: the lenght of string printed
 */
int _printf(const char *format, ...)
{
	int i, count, value;

	va_list args;

	va_start(args, format);
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'i':
				case 'd':
					print_number(va_arg(args, int), &count);
					break;
				case 'u':
					print_unsigned(va_arg(args, unsigned int), &count);
					break;
				case 'o':
					value = va_arg(args, int);
					if (value < 0)
					{
						_putchar('-');
						value = value * -1;
						count++;
					}
					print_octal(value);
					break;
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					print_string(va_arg(args, char*), &count);
					break;
				case '%':
					_putchar('%');
					break;
				default:
					_putchar(format[i - 1]);
					_putchar(format[i]);
					count++;
			}
		}
		count++;
	}
	return (count);
}
