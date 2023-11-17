#include "lists.h"

/**
 * list_len - A function that returns the number of elments in
 *            a linked list_t list
 * @h: the pointer to the elements list
 *
 * Return: the numbers of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
