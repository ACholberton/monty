#include "monty.h"
/**
 * pint - Entry Point
 * @head: head of linked list
 * @element: element for new node if needed
 * Description: prints the value at the top of the stack)?
 */

void pint(stack_t **head, unsigned int line)
{
	stack_t *stack = *head;

	if (*head == NULL || head == NULL)
	{
		dprintf(STDERR_FILENO, "L<%u>: can't pint, stack empty",
			line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->n);
}
