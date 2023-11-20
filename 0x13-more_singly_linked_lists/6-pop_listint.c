#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to the start of the list
 * Return: head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	current = *head;
	*head = (*head)->next;
	n = current->n;
	free(current);

	return (n);
}
