#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all the data (n) of a linked list
 * @head: is a head node of doubly linked list
 * Return: total no of data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
