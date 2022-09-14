#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'print out 0-9'
 * Return: ''
 */

int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);

		if (i < '9')
			putchar(',');
	}
	putchar('\n');
	return (0);
}
