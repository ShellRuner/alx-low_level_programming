#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: A pointer to the first node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *current;

	current = head;
	if (head == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		temp = current;
		temp->n = 0;
		current = temp->next;
		temp->next = NULL;
		free(temp);
	}
}
