#include "lists.h"
/**
 * listint_len - calculates the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return:  returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t e;

	e = 0;
	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}

