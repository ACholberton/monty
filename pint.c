#include "monty.h"
/**
 * pint - Entry Point
 * @head: head of linked list
 * @element: element for new node if needed
 * Description: prints the value at the top of the stack)?
 */

void pint(stack_t **head, unsigned int element)
{
	stack_t *stack;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L<%u>: can't pint, stack empty",
			element);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
