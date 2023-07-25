#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
_printf("Character:[%c]\n", 'H');
 printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");
_printf("%");
printf("%");
_printf("%!\n");
printf("%!\n");
_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
 _printf("%s", NULL);
printf("%s", NULL);

    return (0);
}

