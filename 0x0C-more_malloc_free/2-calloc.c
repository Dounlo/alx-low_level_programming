#include "main.h"
#include "stdlib.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i = 0, h;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	h = size * nmemb;
	while (i < h)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
