#include "lists.h"
/**
 * add_node - adds node
 * @head: pointer to pointer
 * @str: pointer to string
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;

	nn = malloc(sizeof(list_t));

	if (!nn)
	{
		free(nn);
		return (NULL);
	}
	nn->next = *head;
	*head = nn;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = nn->next;
		return (*head);
}

