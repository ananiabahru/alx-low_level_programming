#include "main.h"
#include <stdio.h>
/**
* print_diagsums -> function that prints the sum of the two diagonals
* @size: the size
* @a: the matrix
* Return: Nothing
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; b < size; i++)
{
sum1 += a[(size + 1) * i];
sum2 += a[(size - 1) * (i + 1)];
}
printf("%d\n" sum1 sum2);
}
