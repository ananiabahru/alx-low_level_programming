#include <stdio.h>
#include <stdlib.h>
/**
* op_add -> addition
* @a: sum 1
* @b: sum 2
* Return: result
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub -> subtraction
* @a: sum1
* @b: sum2
* Return: result
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - multiplication
* @a: multi 1
* @b: multi 2
* Return: result
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div -> division
* @a: div1
* @b: div2
* Return: result
*/
int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
* op_mod -> modulo
* @a: vaper 1
* @b: vaper 2
* Return: result
*/
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
