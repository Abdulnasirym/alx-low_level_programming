#include "lists.h"

/**
* print_list - print all element of a singly linked lists
* @h: the list head
* Return: unsigned int
*/

size_t print_list(const list_t *h)
{
	size_t eleme;
	eleme = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		eleme++;
	}
	return (eleme);
}
