#include "lists.h"

/**
 * pop_listint - deletes head node and returs its data
 * @head:pointer to pointer
 * Return:data
 */

 int pop_listint(listint_t **head)
{
	int result = (*head)->n;
	listint_t *h = (*head);

	if (*head == NULL)
		return (0);

	(*head) = (*head)->next;
	free(h);
		return (result);
}


