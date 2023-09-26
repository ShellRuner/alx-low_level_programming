#include "lists.h"

/**
 * listint_len - A function that returns the number of
 *               elements in a linked listint_t list.
 * @h: A pointer to the first node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
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
