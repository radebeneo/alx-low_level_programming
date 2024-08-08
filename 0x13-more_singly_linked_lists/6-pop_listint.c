#include "lists.h"

/**
 * pop_listint - deletes the head node ofa listint_t list
 * @head: pointer to the head of listint_t
 * Return: the integer inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->node;
	tmp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
