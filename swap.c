#include "monty.h"

/**
 * swap - Entry Point
 * @head: head node of linked list
 * @element: element to add to new node if needed
 * Description: swaps the top two elements of the stack
 */

void swap(stack_t **head, unsigned int element)
{
	int tmp1, tmp2;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L<%u>: can't swap, stack too short",
			element);
		exit(EXIT_FAILURE);
	}
	tmp1 = (*head)->n;
	tmp2 = (*head)->next->n;

	(*head)->n = tmp2;
	(*head)->next->n = tmp1;
}
