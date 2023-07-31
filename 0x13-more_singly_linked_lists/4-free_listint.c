#include "lists.h"
/**
 * free_listint - free a list
 * @head: the pointer of a list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
