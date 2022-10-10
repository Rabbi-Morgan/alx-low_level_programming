#include <stdlib.h>
#include "main.h"

/**
 * array_range - array of elements from min to max
 * @min: minimum integer
 * @max: maximum integer
 * Return: NULL if min > max
 * otherwise pointer
 */
int *array_range(int min, int max)
{
	int *array, i, siz;

	if (min > max)
		return (NULL);

	siz = max - min + 1;

	array = malloc(sizeof(int) * siz);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < siz; i++)
		array[i] = min++;

	return (array);
}
