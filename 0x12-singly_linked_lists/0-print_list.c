#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints element of a linked list to standard output
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sum++;
	}

	return (sum);
}
