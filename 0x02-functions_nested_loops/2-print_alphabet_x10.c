#includ "main.h"

/**
* print_alphabet_x10 -> 10 times followed by a new line.
* Return: nothing
*/

void print_alphabet_x10(void);
{
int i;
int m;

for (m = 0; m < 10; m++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
