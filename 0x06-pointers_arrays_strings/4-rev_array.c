#include "main.h"
/**
* reverse_array - Reverses the contents of an array
* @a: The array to be reversed
* @n: Number oof elements in the array
*/
void reverse_array(int *a, int n)
{
int x;
int y;
for (x = 0; x < n; x++)
{
n--;
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
