#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_string - to print strings.
 * @str: the string to be printed.
 *
 * Return: Nothing.
 */
void print_string(char *str)
{
	size_t length;

	if (str)
	{
		length = str_length(str);
		write(1, str, length);
	}
	if (str == NULL)
	{
		write(1, "(null)", 6);
	}
}
