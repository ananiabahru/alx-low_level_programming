#include "main.h"
#include <stdlib.h>

/**
* string_nconcat-> function that concatenates two strings.
* @s1: param 1
* @s2: param 2
* @n: param 3
* Return: string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
unsigned int length = n, index;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (index = 0; s1[index]; index++)
length++;
concat = (char *)malloc(sizeof(char) * length + 1);
if (concat == NULL)
return (NULL);
length = 0;
for (index = 0; s1[index]; index++)
concat[length++] = s1[index];
for (index = 0; s2[index] && index < n; index++)

concat[length++] = s2[index];
concat[length] = '\0';
return (concat);
}
