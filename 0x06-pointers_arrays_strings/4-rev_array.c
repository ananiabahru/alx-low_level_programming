#include "main.h"
/**
* reverse_array -> function that reverses the content of an array of integers.
* @a: array a
* @n: is the number of elements of the array
*/
void reverse_array(int *a, int n)
{
int *p, i aux, j;
p = a;
for (i = 0; i < n; i++)
p++;
for (j = 0; j < i / 2; j++)
{
aux = a[j];
a[j] = *p;
*p = aux;
p--;
}
}
