#include <stdio.h>
#include "main.h"

int print_integer(int num)
{
    char buffer[20];
    int i, index = 0;

    if (num < 0)
    {
        num = -num;
        buffer[index++] = '-';
    }

    do
    {
        buffer[index++] = '0' + (num % 10);
        num /= 10;
    } while (num > 0);

   for (i = index - 1; i >= 0; i--)
    {
        print_char(buffer[i]);
    }

    return (index);
}
