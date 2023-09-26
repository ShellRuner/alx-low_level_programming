#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the first node
 * @n: An int
 *
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
