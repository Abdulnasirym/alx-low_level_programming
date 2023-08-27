#include "lists.h"

/**
* free_list - frees the list
* @head: head
*/

void free_list(list_t *head)
{
	list_t *newhead;

	while ((newhead = head) != NULL)
	{
		head = head->next;
		free(newhead->str);
		free(newhead);
	}
}
