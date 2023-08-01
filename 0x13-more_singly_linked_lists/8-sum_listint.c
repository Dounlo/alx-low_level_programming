#include "lists.h"
/**
 * sum_listint - calculates a sum of the all integer in linked list
 * @head: a pointer of the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sumy = 0;

	while (current)
	{
		sumy = sumy + current->n;
		current = current->next;
	}
	return (sumy);
}
