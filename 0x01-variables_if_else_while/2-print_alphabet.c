#include <stdio.h>
/**
* main - Print alphabets in lowercase
* Return: 0
*/
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int a;
for (a = 0; a < 26; a++)
{
putchar(alph[a]);
}
putchar('\n');
return (0);
}
