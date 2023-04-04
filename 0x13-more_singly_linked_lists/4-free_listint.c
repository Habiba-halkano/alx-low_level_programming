#include "lists.h"

/**
 * free_listint - frees a list_int list
 * @head: a pointer to the head of the list_int
 * list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
