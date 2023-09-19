#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_number - this function prints a number to standard output
 * @num: the number to print
 *
 * Return: number of characters printed
 */

int print_number(int num)
{
	int i, count = 0, *addr, j;
		
	i = num;
	if (num == 0)
	{
		_putchar(i + '0');
		return 1;
	}
	else if (num < 0)
	{
		i = num * -1;
		_putchar('-');
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
	free(addr);
	return (num > 0? count : count + 1);
}
