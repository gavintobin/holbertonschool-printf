#include "lists.h"

/**
 * listint_len - returns num of elements
 * @h: pointer to head
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}	
	return (count);
}

