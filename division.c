#include "monty.h"

/**
 * div_ - Entry Point
 * @head: head of linked list
 * @line: line num
 * Description: divide the tops two elements of the stack)?
 */

void div_(stack_t **head, unsigned int line)
{
	int i, j, div;
	stack_t *current = *head;

	if (*head == NULL || head == NULL || (*head)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L<%u>: can't divide, stack too short\n",
			line);
		freeall(head);
		exit(EXIT_FAILURE);
	}
	i = (*head)->n;
	j = (*head)->next->n;
	if (i == 0)
	{
		dprintf(STDERR_FILENO, "L<%u>: division by zero\n", line);
		exit(EXIT_FAILURE);
	}
	div = j / i;
	current->n = div;
	free(current);
}
