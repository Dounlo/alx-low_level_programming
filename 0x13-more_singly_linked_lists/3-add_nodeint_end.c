#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: a pointer of the list
 * @n: the integer to be duplicated
 *
 * Return: adress of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *pointer;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	pointer = *head;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	while (pointer->next)
		pointer = pointer->next;
	pointer->next = current;
	return (current);
}
