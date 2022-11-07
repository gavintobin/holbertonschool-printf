#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head
 * Return: none
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head);
	}
}
