#include "main.h"
#include "stdlib.h"
/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer, *old;
	unsigned int i;

	if (new_size == old_size)
		return (NULL);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	old = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer[i] = old[i];
	}
	if (new_size < old_size)
	{
	for (i = 0; i < new_size; i++)
		pointer[i] = old[i];
	}
	free(ptr);
	return (pointer);
}
