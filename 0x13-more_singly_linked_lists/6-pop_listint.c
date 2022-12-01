#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of a linked list.
  * @head: head of alinked list
  *
  * Return: 1 for  success 0 for empty list.
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
