#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @str: Const char pointer for data to be added
 * Return: address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *adnew;
	list_t *temp;

	adnew  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (adnew == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = adnew;
		adnew->len = i;
		adnew->str = strdup(str);
		adnew->next = NULL;
		return (adnew);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = adnew;

	adnew->len = i;
	adnew->str = strdup(str);
	adnew->next = NULL;

	return (adnew);

}
