#include "main.h"

/**
* _strdup -> function that returns a pointer to a newly allocated
* @str: string to duplicate
* Return: a string pointer
*/
char *_strdup(char *str)
{
int i = 0, size = 0;
char *k;
if (str == NULL)
return (NULL);
for (; str[size] != '\0'; size++);
/*+1 on the size puts the end of string character*/
k = malloc(size * sizeof(*str) + 1);
if (k == 0)
return (NULL);
else
{
for (; i < size; i++)
k[i] = str[i];
}
return (k);
}
