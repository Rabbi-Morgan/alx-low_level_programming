#include <stdio.h>
#define MAX 100

/**
 * main - simple calculator
 * description - used with basic operations like + - / and*`
 * Returns - nothing
 */

void main(void)
{
	int a, b, sum, sub, dev, mult;
	char sig;

	printf("Enter a character + - / or *: \n");
	scanf("%c", &sig);
	printf("Enter two numbers with space inbetween\n");
	scanf("%d %d", &a, &b);
	switch (sig)
	{
		case '+':
			sum = a + b;
			printf("%d\n", sum);
			break;
		case '-':
			sub = a - b;
			printf("%d\n", sub);
			break;
		case '/':
			dev = a / b;
			printf("%d\n", dev);
			break;
		case '*':
			mult = a * b;
			printf("%d\n", mult);
			break;
	}
	for ( ; a < b ; )
	{
		printf("%d\n", ++a);

	}
}

