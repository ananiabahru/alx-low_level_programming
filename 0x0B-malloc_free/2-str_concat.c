#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat -> function that concatenates two strings.
* @s1: string 1
* @s2: string 2
* Return: string 1 + string 2
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int len = 0;
int h = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
len = i + j;
s = (char *)malloc(len *sizeof(char) + 1);
if (s == NULL)
return (NULL);
j = 0;
while (h < len)
{
if (h < i)
s[h] = s1[h];
if (h >= i)
{
s[h] = s2[j];
j++;
}
h++;
}
s[h] = '\0';
return (s); 
}