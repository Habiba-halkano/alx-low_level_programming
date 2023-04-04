#include "lists.h"

/**
 * pop_listint - pops node
 * @head: list address of listint-t list
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (val);
	tmp = *head;
	val = tmp->n;
	free(*head);
	*head = tmp->next;

	return (val);
}
