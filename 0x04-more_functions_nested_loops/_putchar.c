#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* Return: On Success 1
* on eroor, -1 is returned and errno is set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
