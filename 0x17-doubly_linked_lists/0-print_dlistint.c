#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of
 *                  a dlistint_t list
 * @h: A points to a doubly linked list
 *
 * Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;
		}
		return (count);
	}
	else
		return (0);
}
