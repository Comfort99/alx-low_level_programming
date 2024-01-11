#include "lists.h"
/**
 * add_dnodient - Adds a new node at the begginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: intiger data for the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));/* Allocate memory for the new node */
	if (new_node == NULL)/* If memory allocation failed, return NULL */
	{
		return (NULL);
	}
	new_node->n = n;/* Set the data of the new node to the given value */
	/* Since this node will be added at the beginning, its 'prev' will be NULL */
	new_node->prev = NULL;
	/* The 'next' of this new node will be the current head of the list */
	new_node->next = *head;

	/* If the list is not empty, update the 'prev' of the old head */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;/* Update the head of the list to the new node */
	return (new_node);/* Return the address of the new node */
}
