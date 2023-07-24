#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

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
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	char *separator = "", *str;
	int i = 0, ch;
	va_list print;

	va_start(print, format);

	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;
				switch(format[i])
				{
					case 'c':
						ch = va_arg(print, int);
						write(1, separator, 1);
						write(1, &ch, 1);
						break;

					case 's':
						str = va_arg(print, char*); 
						write(1, separator, 1);
						write(1, str, str_length(str));
						break;

					case '%':
						write(1, separator, 1);
						write(1, "%", 1);
						break;

					default:
						break;
				}
				separator = ", ";
			}
			i++;
		}
	}
	write(1, "\n", 1);

	va_end(print);

	return (i);
}
