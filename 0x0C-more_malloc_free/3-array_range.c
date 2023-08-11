#include "main.h"

/**
 * array_range - creats an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int length, j;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	for (j = 0; j < length; j++)
		ptr[j] = min++;
	return (ptr);
}
