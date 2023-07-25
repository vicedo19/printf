#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	char *str, *null = "(null)";
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
					if (str == NULL)
					{
					write(1, null, 6);
					printed_chars += 6;
					}
					else
					{
					write(1, str, str_length(str));
					printed_chars += str_length(str);
					}
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
	va_end(print);
	return (printed_chars);
}
