#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a
 * list listint_t at a new position
 *
 * @head: a pointer to the head of the listint_t list
 * @idx: an index if the listint_t where the new node
 * should be added
 * @n: the integer for the new node to contain
 *
 * Return: if the function fails - NULL
 * Otherwise - the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}