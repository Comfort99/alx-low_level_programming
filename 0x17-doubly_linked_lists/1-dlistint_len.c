#include "lists.h"
/**
 * dlistint_len - Return the number of elements in a dlistint_t list
 * @h: POinter to the head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
