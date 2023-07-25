#include <unistd.h>

/**
 * print_char - to print characters.
 * @ch: character to be printed.
 *
 * Return: Nothing.
 */
void print_char(int ch)
{
	write(1, &ch, 1);
}
