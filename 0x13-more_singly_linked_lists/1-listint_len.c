#include "lists.h"

/**
 * listint_len - A function that returns the numbers of
 *               elements in a linked listint_t
 *@h: A pointer to the listint_t list
 *
 * return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
