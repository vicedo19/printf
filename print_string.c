#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_string - to print strings.
 * @str: the string to be printed.
 *
 * Return: printed character.
 */
int print_string(char *str)
{
	if(str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	return (write(1, str, str_length(str)));
}
