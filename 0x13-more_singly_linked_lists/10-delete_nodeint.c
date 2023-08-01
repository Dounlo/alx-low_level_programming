#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node from a linked list at index
 * @head: a pointer of the linked list
 * @index: the number of the deleted node
 *
 * Return: 1 success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *trav, *current;

	trav = *head;
	current = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(trav);
		return (1);
	}
	i = 0;
	while (i < index - 1)
	{
		if (trav == NULL || (trav->next) == NULL)
			return (-1);
		trav = trav->next;
		i++;
	}
	current = trav->next;
	trav->next = current->next;
	free(current);
	return (1);
}
