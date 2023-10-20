#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the begginning of the list
 * @head: the original linked list
 * @str: strinnng to addthe node
 * Return: the address of new list or null if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (Null);

	while (str[length])
		length++;

	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
