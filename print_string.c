#include "main.h"
/**
 * print_string - prints a string
 * 
 * @str: string to be printed
 * Return: returns the lenght of characters printed
 */
int print_string(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	return count;
}
