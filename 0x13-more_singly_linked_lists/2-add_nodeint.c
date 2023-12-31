#include "lists.h"

/**
 * add_nodeint - A function that adds anew node at the
 *               beginning of a listint_t list
 * @head: a pointer to the list
 * @n: an int
 *
 * Return:the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
