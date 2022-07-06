#include <unistd.h>
#include "main.h"
/**
* times_table - Check the code
* Description: Time table up to 9
* Return: Nothing.
*/
void times_table(void)
{
int i, n, m;
for (i = 0; i <= 9; i++)
{
for (m = 0; m <= 9; m++)
{
n = i * m;
if ((n / 10) == 0)
{
if (m != 0)
_putchar(' ');
_putchar(n + '0');
if (m == 9)
continue;
_putchar(',');
_putchar(' ');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
if (m == 9)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
