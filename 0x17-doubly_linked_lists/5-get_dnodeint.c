#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node
 *                         of a dlistint_t linked list
 * @head: A point to the doubly linked list
 * @index: Index of the node
 *
 * Return: The nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, idmax = 0;
	dlistint_t *cur, *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		idmax++;
		ptr = ptr->next;
	}
	if (index == 0)
	{
		if (head == NULL)
			return (NULL);
		else
			return (head);
	}
	else if (index > 0 && index < idmax - 1)
	{
		cur = head;
		while (i < index)
		{
			i++;
			cur = cur->next;
		}
		return (cur);
	}
	else
		return (NULL);
}
