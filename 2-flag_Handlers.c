#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _flagSpecifier - Handle flag characters for 0 and -
 *
 *@format: a character string.
 *
 */

void _flagSpecifier(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == "%")
		{
			format++;
			char flag = '\0';

			if (*format == '0')
			{
				flag = '0';
				format++;
			}
			else if (*format == '-')
			{
				flag = '-';
				format++;
			}
			else
			{
				break;
			}
		}
	}
	va_end(args);
}