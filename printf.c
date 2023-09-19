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
	int i, count, temp, value;

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
			if (format[i] == 'd' || format[i] == 'i')
			{
				temp = print_number(va_arg(args, int));
				count += temp - 1;
			}
			else if (format[i] == 'u')
			{
				temp = print_unsigned(va_arg(args, unsigned int));
				count += temp - 1;
			}
			else if (format[i] == 'o')
			{
				value = va_arg(args, int);
				if (value < 0)
				{
					_putchar('-');
					value = value * -1;
					count++;
				}
				temp = print_octal(value);
			}
			else if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				print_string(va_arg(args, char*));
			}
			else if (format[i] == '%')
			{
				_putchar('%');
			}
			else
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
			}
		}
		count++;
	}
	return (count);
}
