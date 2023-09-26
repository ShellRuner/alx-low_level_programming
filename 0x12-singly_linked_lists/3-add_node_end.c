#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a
 *                list_t list.
 * @head: A pointer to the first node
 * @str: A string
 *
 * Return: A pointer to the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
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
