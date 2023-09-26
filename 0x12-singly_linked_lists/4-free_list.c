#include "lists.h"

/**
 * free_list - A function that free a list_t list
 * @head: A pointer to the first node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
