#include "main.h"
/**
* cap_string - Capitalizes each word in a string
* @t: Input string
* Return: The pointer to the changed string
*/
char *cap_string(char *t)
{
int m = 0;
while (t[m])
{
while (!(t[m] >= 'a' && t[m] <= 'z'))
m++;
if (t[m - 1] == ' ' ||
t[m - 1] == '\t' ||
t[m - 1] == '\n' ||
t[m - 1] == ',' ||
t[m - 1] == ';' ||
t[m - 1] == '.' ||
t[m - 1] == '!' ||
t[m - 1] == '?' ||
t[m - 1] == '"' ||
t[m - 1] == '(' ||
t[m - 1] == ')' ||
t[m - 1] == '{' ||
t[m - 1] == '}' ||
m == 0)
t[m] -= 32;
m++;
}
return (t);
}
