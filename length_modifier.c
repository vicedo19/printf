#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _lengthSpecifier - modifies the length of data types.
 *
 *@format: a character string.
 *
*/

void _lengthSpecifier(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == "%")
		{
			format++;
			int length_modif = 0;

			while (*format == 'l' || *format == 'h')
			{
				length_modif = *format;
				format++;
			}
		}
	}
	va_end(args);
}
