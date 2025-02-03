#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: is a head node of doubly linked list
 * @index: is index of node to be returned
 * Return: the node at a given index in doubly linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	while (index > 0 && temp)
	{
		index--;
		temp = temp->next;
		if (!temp)
			return (NULL);
	}
	return (temp);
}
