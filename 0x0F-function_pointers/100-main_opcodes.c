#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code for Holberton School students.
* @argc: argument count.
* @argv: argument vector.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
char *opc = (char *)main;
int j, abytes;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
abytes = atoi(argv[1]);
if (abytes < 0)
{
printf("Error\n");
exit(2);
}
for (j = 0; j < abytes; j++)
{
printf("%02x", opc[j] & 0xFF);
if (j != abytes - 1)
printf(" ");
}
printf("\n");
return (0);
}

