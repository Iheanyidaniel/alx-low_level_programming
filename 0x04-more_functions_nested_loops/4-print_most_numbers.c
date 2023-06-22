#include "main.h"
/**
* print_most_numbers - Prints numbers from 0 to 9 without 2 and 4
* Return: void
*/
void print_most_numbers(void)
{
char b;
for (b = '0'; b <= '9'; b++)
{
if (b != '2' || b != '4')
{
_putchar(b);
}
}
_putchar('\n');
}
