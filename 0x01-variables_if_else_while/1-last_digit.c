#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print something to the terminal'
 * Return: Always 0 (Success)
 */


/* betty style doc for function main goes there */
int main(void)
{
	int n, lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNumber = n % 10;
	if (lastNumber > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,lastNumber);
	else if (lastNumber < 6 && lastNumber != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNumber);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastNumber);
	return (0);
}
