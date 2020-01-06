#include "monty.h"
/**
 *freeall - free the head
 *@head: is the top of the stack
 *Return: nothing
 */

void freeall(stack_t **head)
{
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
}
