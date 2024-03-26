#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the
 *                    end of a dlistint_t list
 * @head: A points to a doubly linked list
 * @n: A n integer
 *
 * Return: the address of the new element, or NULL(failed)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *cur;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		cur = *head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = ptr;
		ptr->prev = cur;
	}
	return (*head);
}
