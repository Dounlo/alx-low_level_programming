#include "lists.h"
#include "string.h"
#include "stdlib.h"
/**
 * *add_node_end - adds a node to the end of a list
 * @head: a pointer of the list
 * @str: the string to be duplicated
 *
 * Return: adress of the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *trav;
	unsigned int length = 0;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	while (str[length])
		length++;
	current->str = strdup(str);
	current->len = length;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	trav = *head;
	while (trav->next)
		trav = trav->next;
	trav->next = current;
	return (current);
}
