#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: a pointer of the list
 * @n: the integer to be duplicated
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (*head);
}
