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
if (s[i] == accept[b])
{
s += a;
return (s);
}
j++;
}
i++;
}
return ('\0');
}
