#include "main.h"
/**
* rev_string - Reverses a string
* @s: String to be reversed
* Return: The reversed string
*/
void rev_string(char *s)
{
char rv = s[0];
int a = 0;
int b;
while (s[a] != '\0')
a++;
for (b = 0; b < a; b++)
{
a--;
rv = s[b];
s[b] = s[a];
s[a] = rv;
}
}

