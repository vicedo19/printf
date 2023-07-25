#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * str_length - calculate the length of string.
 * @str: the string to be considered.
 *
 * Return: string length.
 */
int str_length(char *str)
{
	int i = 0;

	while (str[i])
	{
	i++;
	}
	return (i);
}
