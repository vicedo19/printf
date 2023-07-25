#include <stdio.h>

#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("different length.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
