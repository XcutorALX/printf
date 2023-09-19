#include "main.h"
/**
 * print_octal - this program prints integers in octadeciaml
 *
 * @num: the integer to be printed in octa_decimal
 * Return: the lenght of characters printed
 */
int print_octal(unsigned long int num)
{
	int i = 0;
	if (num > 7)
		i += print_octal(num / 8);
	i++;
	_putchar((num % 8) + '0');
	return i;
}
