#include "lists.h"

/**
 * free_list - A function that free a list_t list
 * @head: A pointer to the first node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp, *current;

	current = head;
	while (current != NULL)
	{
		temp = current;
		temp->str = NULL;
		temp->len = 0;
		current = temp->next;
		temp->next = NULL;
		free(temp);
	}
}
