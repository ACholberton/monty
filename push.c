#include "monty.h"

/**
 * push - Entry Point
 * @element: is the element to be added to new node if needed
 * @head: head node of linked list
 * Description: the new added element.)?
 */

void push(stack_t **head, unsigned int element)
{

	stack_t *new;

	new = (stack_t *) malloc(sizeof(stack_t));

	if (new == NULL)
	{
		printf("malloc failed");
	}

	new->n = element;

	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}

	(*head) = new;

}

/* seperate function for error calls */
