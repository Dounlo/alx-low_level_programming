#include "lists.h"
/**
 * pop_listint - removes the head of a linked list
 * @head: a pointer of a list
 *
 * Return: the integer of the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int x;

	if (head == NULL || (*head) == NULL)
		return (0);
	x = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (x);
}
