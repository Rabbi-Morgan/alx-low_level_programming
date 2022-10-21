#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints no of element to standard output
 * @h: pointer 
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
