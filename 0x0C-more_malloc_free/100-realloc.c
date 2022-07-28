#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _realloc-> function that reallocates a memory block using malloc and free
* @old_size: is the size, in bytes
* @new_size: is the new size, in bytes of the new memory block
* @ptr: pointer
* Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *clone, *relloc;
unsigned int i;
if (ptr != NULL)
clone = ptr;
else
{
return (malloc(new_size));
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
relloc = malloc(new_size);
if (relloc == NULL)
return (0);
for (i = 0; i < (old_size || i < new_size); i++)
{
*(relloc + i) = clone[i];
}
free(ptr);
return (relloc);
}
