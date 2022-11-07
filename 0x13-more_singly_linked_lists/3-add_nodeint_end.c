#include "lists.h"

/**
 * add_nodeint_end - adds node at end
 * @head: pointer to a pointer
 * @n: newnode
 * Return: addy of nn
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn = malloc(sizeof(nn));
	listint_t *tail = *head;

		nn->n = n;
		nn->next = NULL;

		if (*head == NULL)
		{
			(*head) = nn;
			return (nn);
		}
		while (tail->next)
			tail= tail->next;
		
		tail->next = nn;
		
		return (nn);
}
