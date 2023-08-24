#include "lists.h"

/**
* add_node_end - adds node to the end of the list
* @head: head of the node
* @str: string
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int i, count = 0;

	new  = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new->len = count;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
