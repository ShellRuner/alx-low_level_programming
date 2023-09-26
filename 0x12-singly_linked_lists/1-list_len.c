#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a
 *            linked list_t list
 * @h: A pointer to a node
 *
 * Return: the number of element in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
