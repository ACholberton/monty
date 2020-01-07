#include "monty.h"

/**
 *sub - subtracts the top element of the stack from the second top element of
 * the stack.
 *@head: is the top of the stack
 *@line: is the line number
 */

void sub(stack_t **head, unsigned int line)
{
	int i, j, sub;
	stack_t *current = *head;
	stack_t *next = (*head)->next;

	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't sub, stack too short\n",
			line);
		freeall(head);
		exit(EXIT_FAILURE);
	}
	i = (*head)->n;
	j = (*head)->next->n;

	sub = j - i;
	current->next->n = sub;
	free(current);
	(*head) = next;
}
