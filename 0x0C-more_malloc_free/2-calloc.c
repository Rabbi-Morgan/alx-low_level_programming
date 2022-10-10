#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: int
 * @size: int
 * Return: pointer to the address block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *f;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	f = m;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (m);
}
