#include "monty.h"

/**
 * pop - Entry Point
 * @head: head of linked list
 * @line: line number
 * Description: removes top element of the stack)?
 */

void pop(stack_t **head, unsigned int line)
{
	stack_t *temp = *head;
	stack_t *holder;

	if (temp != NULL)
	{
		holder = temp->next;
		free(temp);
		*head = holder;
		holder->prev = NULL;
	}
	else
	{
		dprintf(STDERR_FILENO, "L<%u>: can't pop an empty stack", line);
		freeall(head);
		exit(EXIT_FAILURE);
	}
}
