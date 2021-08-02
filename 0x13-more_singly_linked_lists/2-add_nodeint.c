#include "lists.h"

/**
 * add_nodeint - function that adds a node at the beginning
 * @head: head of the list
 * @n: int data
 * Return: new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	} else
	{
		return (NULL);
	}
	*head = new_node;
	return (new_node);
}
