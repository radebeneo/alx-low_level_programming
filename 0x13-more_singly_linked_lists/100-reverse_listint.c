#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the head in listint_t
 * Return: pointer to the head in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
