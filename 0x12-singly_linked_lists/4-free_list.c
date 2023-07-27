#include "lists.h"
#include "string.h"
#include "stdlib.h"
/**
 * free_list - free a list
 * @head: the pointer of a list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *trav;

	while (head)
	{
		trav = head->next;
		free(head->str);
		free(head);
		head = trav;
	}
}
