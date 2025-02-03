#include "lists.h"
/**
* add_dnodeint_end - function that adds a new node at the end of a list
* @head: is a pointer to the head node of doubly linked list
* @n: is an element of a node of doubly linked list
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (!*head)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
			end->next = new;
			new->prev = end;
	}
	return (new);
}
