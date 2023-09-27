#include "lists.h"

/**
 * pop_listint - A function that deketes the head node of a
 *               listint_t linked list, and returns the head
 *               node's data (n).
 * @head: A pointer to the first node
 *
 * Return: 0 if the linked lists is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (*head == NULL)
		return (0);
	res = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (res);
}
