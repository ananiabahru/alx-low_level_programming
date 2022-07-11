#include "main.h"
#include <stdio.h>
/**
* printing_array -> function that prints n elements of an array of integers.
* @a: print elements of an array.
* @n: number of array elements.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}
