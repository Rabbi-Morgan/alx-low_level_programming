#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - returns a pointer to an allocated memory 
* @b: a positive integer (unsigned int)
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

