#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 *
 * @head: A point to a doubly linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur, *touch;

	if (head == NULL)
		head = NULL;
	else
	{
		cur = head;
		while (cur != NULL)
		{
			touch = cur;
			cur = cur->next;
			touch->n = 0;
			free(touch);
		}
		head = NULL;
	}
}
