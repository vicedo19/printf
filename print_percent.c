#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_percent - to print percent.
 *
 * Return: printed character.
 */
int print_percent(void)
{
	return (write(1, "%", 1));
}
