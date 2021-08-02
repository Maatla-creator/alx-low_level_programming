#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 1;

	if (h == NULL)
	{
		return (0);
	}
	nodes += listint_len((h->next));

	return (nodes);
}
