#include "main.h"
/**
* _strpbrk -> function that searches a string for any of a set of bytes.
* @s: is string
* @accept: accepted characters
* Return: the string the first accepted character
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
s += i;
return (s);
}
j++;
}
i++;
}
return ('\0');
}
