#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - append new node in first node
 * @head: double pointer
 * @str: string pointer
 *
 * Return: address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newPtr;
	unsigned int lenOfNode = 0;

	while (str[lenOfNode])
		lenOfNode++;

	newPtr = malloc(sizeof(list_t));
	if (!newPtr)
		return (NULL);

	newPtr->str = strdup(str);
	newPtr->lenOfNode = lenOfNode;
	newPtr->next = (*head);
	(*head) = newPtr;

	return (*head);
}
