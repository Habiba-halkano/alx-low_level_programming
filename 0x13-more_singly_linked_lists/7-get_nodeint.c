#include "lists.h"

/**
 * *get_nodeint_at_index - locates a given node of
 * a listint_t list
 * @head: a pointer to the head of listint_t list
 * @index: the index of the node to locate
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
