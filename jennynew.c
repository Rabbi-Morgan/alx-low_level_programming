#include <stdio.h>

void main(void)
{
	
	int i, c;
	int a[5];


	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", &a[0]);
	for (i=0;i<=20;i++)
	{
		for(c=0;c<=i;c++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}
