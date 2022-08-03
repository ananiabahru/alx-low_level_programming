#include <stdio.h>
#include "function_pointers.h"
/**
* int_index -> function that searches for an integer.
* @cmp: is a pointer to the function to be used to compare values
* @size: number of elements in the array
* @array: array of elemnts
* Return: index first element cmp function does not return 0
* If size <= 0, return -1
* If no element matches, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
if (array && cmp)
{
for (k = 0; k < size; k++)
{
if (cmp(array[k]) != 0)
{
return (k);
}
}
}
return (-1);
}
