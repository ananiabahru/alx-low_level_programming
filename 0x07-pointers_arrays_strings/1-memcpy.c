#include "main.h"
/**
 * _memcpy ->  function that copies memory area.
 * @dest: is destinstion memory 
 * @src: is source memory
 * @n: number of bytes
 * return: to string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int a;
    for (a = 0; a < n; a++)
    dest[a] = src[a]
    return (dest);
}