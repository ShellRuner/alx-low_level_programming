#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 *                    at the end of a listint_t list
 * @head: a head pointer to a listint_t list
 * @n: an int
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *cur;

	cur = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = ptr;
	}
	return (ptr);
}
