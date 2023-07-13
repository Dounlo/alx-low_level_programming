#include "stdlib.h"
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minumum of values stored
 * @max: maximum of values stored
 *
 * Return: an integer pointer
 */
int *array_range(int min, int max)
{
	int *pointer, i = 0;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
		return (NULL);
	while (min <= max)
	{
		pointer[i] = min;
		i++;
		min++;
	}
	return (pointer);
}
