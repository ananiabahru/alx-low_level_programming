#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator -> function that executes
* @array: array of elements
* @action: pointer to function
* @size: array's size
* Return: No
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;
if (array && size && action)
{
for (j = 0; j < size; j++)
{
(*action)(array[j]);
}
}
}
