#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* array_range-> function that creates an array of integers.
* @min: minimum
* @max: maximum
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *array, index = 0, t = min;
if (min > max)
return (0);
array = malloc((max - min + 1) * sizeof(int));
if (!array)
return (0);
while (index <= max - min)
array[index++] = t++;
return (array);
}
