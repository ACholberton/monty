#include "monty.h"

/**
 * _mul - Entry Point
 * @head: head of linked list
 * @line: line num
 * Description: multiplies the tops two elements of the stack)?
 */

void _mul(stack_t **head, unsigned int line)
{
	int i, j, result;

	if (*head == NULL || head == NULL|| (*head)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L<%u>: can't mul, stack too short\n",
			line);
		exit(EXIT_FAILURE);
	}

	i = (*head)->n;
	j = (*head)->next->n;

	result = i * j;

	(*head)->n = result;
	free(head);
}
