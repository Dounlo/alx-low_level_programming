#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: thes size of the memory to allocate
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mo;

	mo = malloc(b);
	if (mo == NULL)
	{
		exit(98);
	}
	return (mo);
}
