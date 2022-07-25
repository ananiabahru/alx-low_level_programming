#include <stdlib.h>

/**
* create_array -> creating array
* @size: size of array to be created
* @c: character an array is initialized with
* Return: a pointer to array
*/
char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
return (0);
while (size--)
m[size] = c;
return (m);
}

