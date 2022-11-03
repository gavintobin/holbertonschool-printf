#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 *  print_list - prints elements of a list
 * @h: pointer to list
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	int num = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (!(temp->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		num++;
		temp = temp->next;
	}
	return (num);
}


