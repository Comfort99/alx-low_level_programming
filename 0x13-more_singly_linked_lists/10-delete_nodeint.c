#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the address of the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;

	listint_t *temp, *prev = NULL;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (j = 0; j < index && temp != NULL; j++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
