#include "lists.h"
/**
* print_dlistint - function that prints all the elements of a dlistint_t list.
* h: head node of the list
* Return: the num of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_no = 0;

	while (h)
	{
		node_no += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_no);
}
