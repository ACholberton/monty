#include "monty.h"

/**
 * add - Entry Point
 * @head: head of linked list
 * @line: line num
 * Description: adds the tops two elements of the stack)?
 */

void add(stack_t **head, unsigned int line)
{
	int i, j, sum;
	stack_t *current = *head;
	stack_t *next = (*head)->next;

	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n",
			line);
		freeall(head);
		exit(EXIT_FAILURE);
	}
	i = (*head)->n;
	j = (*head)->next->n;

	sum = i + j;
	current->next->n = sum;
	free(current);
	(*head) = next;
}
