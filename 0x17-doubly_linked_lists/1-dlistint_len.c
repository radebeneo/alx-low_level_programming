#include "lists.h"
/**
 * dlistint_len - function that returns number of elements in a linked list.
 * @h: head node of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_no = 0;

	while (h != NULL)
	{
		element_no++;
		h = h->next;
	}

	return (element_no);
}
