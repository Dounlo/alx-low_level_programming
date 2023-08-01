#include "lists.h"
/**
 * get_nodeint_at_index - points to the nth node of a linked list
 * @head: a pointer of the linked list
 * @index: the index of the node
 *
 * Return: the pointer of the nthe node or else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current ? current : NULL);
}
