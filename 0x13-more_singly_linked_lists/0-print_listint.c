#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a
 *                 listint_t list.
 * @h: A pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
