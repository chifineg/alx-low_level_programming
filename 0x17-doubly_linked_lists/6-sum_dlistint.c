#include "lists.h"

/**
 * sum_dlistint - adds all of the data of a dlistint_t linked list
 * @head: pointer to the start of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
