#include "main.h"
/**
* _memcpy - Copies memory area
* @dest: destination
* @src: source
* @n: Number of bytes
* Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
