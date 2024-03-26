#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the
 *                beginning of a dlistint_t list
 * @head: A point to a doubly linked list
 * @n: An integer
 * Return: the addressof the new elemet, or NULL(failed)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		ptr->next = *head;
		(*head)->prev = ptr;
		*head = ptr;
	}
	return (*head);
}
