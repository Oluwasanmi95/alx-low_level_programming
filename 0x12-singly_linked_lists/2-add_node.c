#include "lists.h"

/**
 * add_node - inserts node at the beginning
 * @head: pointer to the first node
 * @str: string data for node
 *
 * Return: Returns pointer to struct variable list_s
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *inter_link = (list_t *) malloc(sizeof(list_t));

	if (inter_link == NULL)
	{
		printf("***Error***");
		exit(1);
	}

	inter_link->str = strdup(str);
	inter_link->len = strlen(str);
	inter_link->next = *head;
	*head = inter_link;
	return (*head);
}
