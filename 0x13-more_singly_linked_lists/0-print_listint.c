#include "lists.h"
#include "stdio.h"
/**
 * print_listint  - prints all the elements of a linked list
 * @h: a pointer that point to the next node
 *
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
