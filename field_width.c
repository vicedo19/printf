#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _fieldWidth - modifies the width.
 *
 *@format: a character string.
 *
*/

void _fieldWidth(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == "%")
		{
			format++;
			int f_width = 0;

			if (*format >= '0' && *format <= '9')
			{
				while (*format >= '0' && *format <= '9')
				{
					f_width = f_width * 10 + (*format - '0');
					format++;
				}
			}
		}
	}
	va_end(args);
}
