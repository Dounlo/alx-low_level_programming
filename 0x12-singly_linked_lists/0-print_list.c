#include "lists.h"
#include "stdio.h"
#include <stddef.h>
/**
 * print_list  - prints all the elements of a linked list
 * @h: a pointer that point to the next node
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
		return (nodes);
}
