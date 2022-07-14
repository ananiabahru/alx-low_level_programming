#include "main.h"
#include <string.h>
/**
* _strncat -> function that concatenates two strings.
* @dest: first param
* @src: second param
* @n: 3rd param
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
	return (dest);

}
