#include "lists.h"

/**
 * free_list - de-allocates reserved memory of list starting with head
 * @head: pointer to start of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *de_allocate;

	while (head->next != NULL)
	{
		de_allocate = head->next;
		free(head->str);
		free(head);
		head = de_allocate;
	}
}
