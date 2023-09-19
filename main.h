#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int num, int *i);
int print_octal(unsigned long int);
int print_unsigned(unsigned int num, int *i);
int print_string(char *str, int *i);

#endif
