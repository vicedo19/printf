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
	char *str;
	int ch, num, printed_chars = 0;
	va_list print;

	va_start(print, format);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case 'd':
					case 'i':
						num = va_arg(print, int);
						printed_chars += print_integer(num);
						break;
					case 'c':
						ch = va_arg(print, int);
						printed_chars += print_char(ch);
						break;
					case 's':
						str = va_arg(print, char*);
						printed_chars += print_string(str);
						break;
					case '%':
						printed_chars += print_percent();
						break;

					default:
						printed_chars += write(1, format - 1, 1);
						printed_chars += write(1, format, 1);
						break;
				}
			}
			else
			{
				printed_chars += write(1, format, 1);
			}
		format++;
		}
	va_end(print);
	return (printed_chars);
}
