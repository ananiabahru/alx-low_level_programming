#include "main.h"
/**
* string_toupper -> lowercase letters of a string to uppercase.
* @y: string param
* Return: string
*/
char *string_toupper(char *y)
{
int i = 0;
while (y[i])
{
if (y[i] >= 97 && y[i] <= 122)
y[i] = y[i] - 32;
i++;
}
return (y);
}
