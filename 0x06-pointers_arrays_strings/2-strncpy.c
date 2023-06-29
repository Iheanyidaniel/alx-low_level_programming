#include "main.h"
/**
* _strncpy - Copies a string
* @dest: destination
* @src: source
* @n: Amount of bytes used from source
* Return: Pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
