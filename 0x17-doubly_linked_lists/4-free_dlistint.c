#include "main.h"

/**
 * free_dlistint - Free a dlistint_t list
 * @head: The head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}