#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
