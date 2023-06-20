#include "main.h"
/**
* print_alphabet_x10 - Print 10x alphabet in lowercase, followed by new line
*/
void print_alphabet_x10(void)
{
char x;
int a;
a = 0;
while (a < 10)
{
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
a++;
}
}
