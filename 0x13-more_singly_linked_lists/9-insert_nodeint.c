#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at the index place
 * @head: a pointer of the linked list
 * @idx: the position of the nex node
 * @n: an integer to be duplicated
 *
 * Return: a pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *trav;
	unsigned int i = 0;

	trav = *head;
	current = malloc(sizeof(listint_t));
	if (head == NULL || current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (*head);
	}
	while (trav && i < idx)
	{
		if (i == idx - 1)
		{
			current->next = trav->next;
			trav->next = current;
			return (current);
		}
		else
		{
			trav = trav->next;
			i++;
		}
	}
	return (NULL);
}
