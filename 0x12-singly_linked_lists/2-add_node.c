#include "main.h"
#include "stdio.h"
/**
 * *add_node - creates a node to the beginning of a list
 * @head: double pointer of the list
 * @str: a string to be duplicated to the list
 *
 * Return: the adress of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length;
	list_t *current;

	while (str)
		lenght++;
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	current->len = length;
	current->next = *head;
	*head = current;

	return (*head);
}
