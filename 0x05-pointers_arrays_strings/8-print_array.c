#include "main.h"
#include <stdio.h>
/**
* print_array - Print the elements of an array
* @a: The input array
* @n: Number of values to be printed
*/
void print_array(int *a, int n)
{
int r;
for (r = 0; r < n; r++)
{
printf("%d", a[r]);
if (r != n - 1)
printf(", ");
}
printf("\n");
}
