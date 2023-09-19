#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_unsigned - prints an unsigned number
 * @num: number to be printed
 * Return: returns the length of characters printed
 */
int print_unsigned(unsigned int num)
{	
	int count = 0, j, *addr;

	unsigned int i;	

	i = num;
	if (num == 0)
	{
		_putchar(i + '0');
		return 1;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}

	addr = malloc(sizeof(int) * count);
	
	i = num > 0? num : num * -1;
	j = 0;
	while (i > 0)
	{
		addr[count - 1 - j] = (i % 10);
		i = i / 10;
		j++;
	}

	for (j = 0; j < count; j++)
	{
		_putchar(addr[j] + '0');
	}
	return (count);
}
