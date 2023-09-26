#include "lists.h"

/**
 * add_node - A function that add new node at the beginningnof a
 *            list_t list
 * @head: A pointer to a pointer
 * @str: A string
 *
 * Return: A pointer to the new elemnt or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
