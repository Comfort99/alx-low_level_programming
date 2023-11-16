#include "lists.h"
/**
 * free_list -  function that freesthe linked list
 * @head: pointer to the current node
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *temp;

	while (current_node != NULL)
	{
		temp = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = temp;
	}
	head = NULL;
}
