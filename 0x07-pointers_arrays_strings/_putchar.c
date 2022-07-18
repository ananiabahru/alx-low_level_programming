#include <unistd.h>
<<<<<<< HEAD
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* 
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
=======

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
>>>>>>> 9df633388258f00bf5c0024a3dc0e2ca604dfcef
