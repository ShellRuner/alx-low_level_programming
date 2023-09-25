#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a
 *              list_t list.
 * @h: a pointer on a node
 *
 * Return: an int (the number of node)
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
