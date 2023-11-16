#include "lists.h"
/**
 * add_node_end - This function creates a new node,
 * duplicates the string str into it,
 * and adds it to the end of the list
 * @head: points to the current node
 * @str: string to be duplicated
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
