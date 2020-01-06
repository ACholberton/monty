#include "monty.h"
/**
 * pall - Entry Point
 * @head: head of linked list
 * @line: line number
 * Description: prints all elements on the stack)?
 */
void pall(stack_t **head, unsigned int line)
{
	stack_t *stack = *head;
	(void)line;

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
