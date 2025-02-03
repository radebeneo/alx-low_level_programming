#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node at index of a linked list
 * @head: is head node of doubly linked list
 * @index: is index given where to delete a node in dlistint_t list
 * Return: 1 successful, otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i < index && current)
	{
		current = current->next;
		i++;
	}

	if (!current)
		return (-1);

	if (current == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		current->prev->next = current->next;

		if (current->next != NULL)
			current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
