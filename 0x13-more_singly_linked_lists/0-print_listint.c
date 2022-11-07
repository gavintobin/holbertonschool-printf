#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints elements
 * @h: pointer to head
 * Return: elements
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
			printf("%d\n", h->n);
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		num++;
	}
	return (num);
}

