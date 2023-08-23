#include "lists.h"

/**
* print_list - print all element of a singly linked lists
* @h: the list head
* Return: unsigned int
*/

size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}
