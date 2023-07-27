#include "lists.h"
/**
 * list_len - calculates the numbe of nodes
 * @h: a pointer to the list
 *
 * Return: tne number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nnodes;

	nnodes = 0;
	while (h)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
