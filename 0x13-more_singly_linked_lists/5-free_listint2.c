#include "lists.h"

/**
 * free_listint2 - frees a list_int list
 * desc - sets the head to NULL
 * @head: a pointer to the head of the list_int
 * list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		*head = h->next;
		free(*head);
		h = *head;
	}
	*head = NULL;
}
