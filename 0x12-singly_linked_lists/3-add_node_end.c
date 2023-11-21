#include "lists.h"

/**
 * add_node_end - A function that adds a new node at
 *                the end of a list_t list.
 * @head: the pointer to the fisrt node
 * @str: a string
 *
 * Return: the address of the new element or
 *         Null(failed)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tp;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		tp = *head;
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = ptr;
	}
	return (*head);

}
