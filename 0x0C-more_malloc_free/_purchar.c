#include <unistd.h>

/**
 * _putchar - returns character c to standard output
 * @c: a character
 * Return: On success 1.
 * On error, 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
