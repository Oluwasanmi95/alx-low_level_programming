#include "lists.h"

/**
 * free_listint - de-allocates reserved memory of list starting with head
 * @head: pointer to start of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *de_allocate;

	while (head != NULL)
	{
		de_allocate = head->next;
		free(head);
		head = de_allocate;
	}
}
