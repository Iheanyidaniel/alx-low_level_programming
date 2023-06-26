#include <unistd>
/**
* _putchar - writes character c to stdout
* @c: Character to be printed
* Return: On success 1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
