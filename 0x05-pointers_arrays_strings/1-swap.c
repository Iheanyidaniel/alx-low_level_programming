#include "main.h"
/**
* swap_int - swaps the values o two integers
* @a: First pointer
* @b: Second pointer
*/
void swap_int(int *a, int *b)
{
int d;
d = *a;
*a = *b;
*b = d;
}
