#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t
 *              list
 * @h: a pointer the elements to print
 *
 * Return: the number of node or (nil)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
