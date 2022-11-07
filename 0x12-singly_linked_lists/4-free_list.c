#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer
 * Return: none
 */

void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->str);
	}
	free(head);
}
