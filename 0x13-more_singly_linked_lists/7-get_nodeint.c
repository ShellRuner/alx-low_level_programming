#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns th nth node of
 *                        a listint_t linked list.
 * @head: A pointer to the first node
 * @index: A paramter
 *
 * Return: A pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
