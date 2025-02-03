#include "lists.h"
/**
* add_dnodeint_end - function that adds a new node at the end of a list
* @head: is a pointer to the head node of doubly linked list
* @n: is an element of a node of doubly linked list
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = (*head);

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*head = new;
	new->prev = temp;

	return (new);
}
