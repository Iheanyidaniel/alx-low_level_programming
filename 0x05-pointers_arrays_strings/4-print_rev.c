#include "main.h"
/**
* print_rev - Prints the reverse of a string
* @s: String to be reversed
*/
void print_rev(char *s)
{
int l = 0;
while (s[l] != '\0')
l++;
for (l = l - 1; l >= 0; l--)
_putchar(s[l]);
_putchar('\n');
}
