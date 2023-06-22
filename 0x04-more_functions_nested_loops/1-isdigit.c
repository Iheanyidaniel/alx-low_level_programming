#include "main.h"
/**
* _isdigit - Checks if a number is 0 to 9
* @c: char to be checked
* Return: 1 if c is digit, otherwise return 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
