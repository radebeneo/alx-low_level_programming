#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: is a pointer to a head node of doubly linked list
 * @n: is an element of a node of doubly linked list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (!(*head) || !head)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;

		return (new_node);
	}

	new_node->prev = NULL;
	new_node->next = current;
	current->prev = new_node;
	*head = new_node;

	return (new_node);
}
