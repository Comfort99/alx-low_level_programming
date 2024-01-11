#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: The index of the list where the new
 * node should be added. Index starts at 0.
 * @n: The integer data for the new node
 * Return:  The address of the new element, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n)); /* Add node at the beginning if idx is 0 */
	}
	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);  /* If current is NULL, idx is out of range */
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);  /* If memory allocation failed, return NULL */
	}
	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
