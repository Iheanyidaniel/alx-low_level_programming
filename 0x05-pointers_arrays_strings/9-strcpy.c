#include "main.h"
/**
* _strcpy - Copies the content of a string pointed
* @dest: Destination
* @src: source
* Return: The pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
while (*(src + l) != '\0')
{
*(dest + l) = *(src + l);
l++;
}
*(dest + l) = '\0';
return (dest);
}
