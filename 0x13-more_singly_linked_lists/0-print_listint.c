#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int nodes = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		nodes++;
		printf("%d", tmp->n);
		printf("\n");
	      	tmp = tmp->next;
	}

	return (nodes);
}
