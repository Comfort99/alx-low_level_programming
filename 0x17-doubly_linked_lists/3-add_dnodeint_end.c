#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: The integer data for the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last = *head;  /* used in step 5*/
	/* 1. allocate node */
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	} /* 2. put in the data  */
	new_node->n  = n;
	/* 3. This new node is going to be the last node, so make next of it as NULL*/
	new_node->next = NULL;
	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	} /* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;
	/* 6. Change the next of last node */
	last->next = new_node;
	/* 7. Make last node as previous of new node */
	new_node->prev = last;
	return (new_node);
}
