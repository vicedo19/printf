#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _precisionSpecifier - handles the precision.
 *
 *@format: a character string.
 *
*/

void _precisionSpecifier(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == "%")
		{
			format++;
			int precision = -1;

			if (*format == '.')
			{
				format++;
				precision = 0;
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
