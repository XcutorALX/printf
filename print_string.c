#include "main.h"
/**
 * print_string - prints a string
 * @str: string to be printed
 * @ptr: an integer used to keep count of characters printed
 * Return: returns the lenght of characters printed
 */
int print_string(char *str, int  *ptr)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	(*ptr) += count - 1;
	return (count);
}
