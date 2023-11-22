#include "lists.h"

/**
 * free_list - A function that can frees a list_t list
 * @head: the pointer to the linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *cur, *prev;

	cur = head;
	while (cur != NULL)
	{
		prev = cur;
		cur = cur->next;
		free(prev);
	}
	head = NULL;
}
