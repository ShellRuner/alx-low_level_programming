#include "lists.h"

/**
 * sum_listint - A function that return the sum of all the data
 *               (n) of a listint_t linked list.
 * @head: A pointer to the first node
 *
 * Return: an int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
