#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination of memory data
 * @src: source of mempry data
 * @n: bytes from memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}
