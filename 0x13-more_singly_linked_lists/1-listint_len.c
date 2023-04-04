#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in the list
 * @h: pointer to the head of the list_int list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
