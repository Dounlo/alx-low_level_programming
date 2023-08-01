#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: a pointer of the head of the linked list
 *
 * Return: a pointer of the head of the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *after = NULL;
	listint_t *before = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (*head);
}
