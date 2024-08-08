#include "lists.h"

/**
 * pop_listint - deletes the head node ofa listint_t list
 * @head: pointer to the head of listint_t
 * Return: the integer inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	(*head) = (*head)->next;
	free(tmp);

	return (n);
}
