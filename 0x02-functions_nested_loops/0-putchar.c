#include <unistd.h>
#include "main.h"
/**
* main - Print _putchar using the function called main
* Description: It prints the word Holberton, followed by a new line.
* Return: Always 0
*/
int main(void)
{
char word[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
