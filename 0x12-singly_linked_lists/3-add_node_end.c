#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: pointer to the firat node
 * @str: string data to fill node
 *
 * Return: pointer to newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *inter_link = (list_t *) malloc(sizeof(list_t));
	list_t *facilitator;

	if (inter_link == NULL)
	{
		printf("****Error****");
		exit(1);
	}
	if (str == NULL)
	{
		free(inter_link);
		return (NULL);
	}
	inter_link->str = strdup(str);
	inter_link->len = strlen(str);
	if (*head == NULL)
	{
		inter_link->next = *head;
		*head = inter_link;
		return (*head);
	}
	facilitator  = *head;
	if (facilitator->next == NULL)
	{
		facilitator->next = inter_link;
		inter_link->next = NULL;
	}
	else
	{
		while (facilitator->next != NULL)
			facilitator = facilitator->next;
		facilitator->next = inter_link;
		inter_link->next = NULL;
	}
	return (inter_link);
}
