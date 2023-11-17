#include "lists.h"

/**
 * add_node - A function that adds a node at the beginning of
 *            a list_t list
 * @head: a pointer to the elements list
 * @str: the elements string
 *
 * Return: the address of the new element or NULL (fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
