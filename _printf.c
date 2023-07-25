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
}

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	char *str;
	int ch, printed_chars = 0;
	va_list print;

	va_start(print, format);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case 'c':
						ch = va_arg(print, int);
						print_char(ch);
						printed_chars++;
						break;
					case 's':
						str = va_arg(print, char*);
						print_string(str);
						printed_chars += str_length(str);
						break;
					case '%':
						write(1, "%", 1);
						printed_chars++;
						break;
					default:
						break;
				}
			}
			else
			{
				write(1, format, 1);
				printed_chars++;
			}
		format++;
		}
	va_end(pint);
	return (printed_chars);
}
