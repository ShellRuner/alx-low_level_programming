#include "lists.h"

/**
 * dlist_len - A function that returns the number of elemts
 *             in a doubly linked list
 * @h: A pointer to a doubly linked list
 *
 * Return: the number of elements
 */
unsigned int dlist_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
