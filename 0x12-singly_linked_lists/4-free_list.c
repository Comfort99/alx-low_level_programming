#include "lists.h"
/**
 * free_list -  function that freesthe linked list
 * @head: pointer to the current node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
