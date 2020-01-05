#include "monty.h"

/**
 * pop - Entry Point
 * @head: head of linked list
 * @element: element to be added to new node if needed
 * Description: removes top element of the stack)?
 */

void pop(stack_t **head, unsigned int element)
{
	stack_t *temp = *head;
	stack_t *holder;
	(void)element;

	if (temp != NULL)
	{
		holder = temp->next;
		free(temp);
		*head = holder;
	}
}
