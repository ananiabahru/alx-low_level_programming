#include "main.h"
/**
 * _memset -> function that fills memory with a constant byte.
 * @s: is string 
 * @b: is character
 * @n: is a number or integer
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}