#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *rip = head;

	while (head != NULL)
	{
		rip = head->next;
		free(head);
		head = rip;
	}
	free(rip);
}
