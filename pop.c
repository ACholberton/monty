#include "monty.h"

/**
 * pop - Entry Point
 * @head: head of linked list
 * @element: element to be added to new node if needed
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
	}
	else
	{
		dprintf(STDERR_FILENO, "L<%u>: can't pop an empty stack", line);
		exit(EXIT_FAILURE);
	}
}
