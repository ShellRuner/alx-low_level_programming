#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 *                in a linked dlistint_t list
 * @h: A points to a doubly linked list
 *
 * Return: the number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
		return (count);
	}
	else
	{
		return (0);
	}
}
