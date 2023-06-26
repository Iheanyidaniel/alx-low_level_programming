#include "main.h"
/**
* puts2 - Prints one character out of two in a string.
* @str: Input string
* Return: Result
*/
void puts2(char *str)
{
int i = 0;
for (str[i] != '\0'; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');
}
