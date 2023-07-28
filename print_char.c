#include <unistd.h>

/**
 * print_char - to print characters.
 * @ch: character to be printed.
 *
 * Return: Nothing.
 */
int print_char(int ch)
{
	return (write(1, &ch, 1));
}
