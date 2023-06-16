#include <stdio.h>
/**
* main - Prints the alphabet in uppercase and lowercase
* Return: Always 0
*/
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a;
for (a = 0; a < 52; a++)
{
putchar(alph[a]);
}
putchar('\n');
return (0);
}
