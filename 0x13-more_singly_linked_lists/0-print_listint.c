#include "lists.h"

/**
 * print_listint - A function that prints all the element
 *                 of a listint_t list
 * @h: a pointer to the listint_t list to print
 *
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
