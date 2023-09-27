#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end
 *                   of a listint_t list.
 * @head: A pointer to the first node
 * @n: An int
 *
 * Return: the adress of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
