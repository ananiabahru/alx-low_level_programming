#include "main.h"
/**
* print_to_98 - Check description
* @n: A input integer
* Description: It prints whole number n - 98
* and 98 to n in order
* Return: Nothing.
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
}

