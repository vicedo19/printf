#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int str_length(*str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	char
}
