#include "lists.h"
/**
 * print_list - prints the list of strings
 * @h: points to the head of linked list
 * Return: integer
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
