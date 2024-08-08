#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in listint_t list
 * @head: first node in the listint_t
 * @index: index of the node to return
 * Return: pointer to the node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
