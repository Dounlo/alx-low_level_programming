#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: a pointer of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *trav;

	if (head == NULL)
		return;
	while (*head)
	{
		trav = (*head)->next;
		free(*head);
		(*head) = trav;
	}
	(*head) = NULL;
}
