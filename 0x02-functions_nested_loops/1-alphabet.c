#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar('\n');
}
