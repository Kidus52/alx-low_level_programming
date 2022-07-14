#include "lists.h"

/**
 * _strlen - find length of a string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node - add node to beginning of list_t
 * @head: linked list
 * @str: string of the new node
 * Return: address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	(*new_node).str = strdup(str);
	(*new_node).len = _strlen(str);
	if (head == NULL)
		(*new_node).next = NULL;
	else
		(*new_node).next = *head;
	*head = new_node;

	return (new_node);
}
