#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of listint_t list to be freed
 * Description: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
