#include "lists.h"

/**
 *  add_nodeint - adds new node at front
 * @head: pointer to pointer
 * @n: new node
 * Return: address of new elem
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *nn = malloc(sizeof(nn));


	nn->n = n;
	nn->next = NULL;
	
	if (head == NULL)
		(*head) = nn;
	else
	{
		 listint_t *tmp = *head;
		(*head) = nn;
		(*head)->next = tmp;
	}
	return (nn);
}
