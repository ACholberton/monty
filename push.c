#include "monty.h"

/**
 * push - Entry Point
 * @element: is the element to be added to new node if needed
 * @head: head node of linked list
 * Description: the new added element.)?
 */

void push(stack_t **head, unsigned int line)
{

	stack_t *new;
	char *digit;
	int num = 0;
	(void)line;

	new = (stack_t *) malloc(sizeof(stack_t));

	if (new == NULL)
	{
		printf("malloc failed");
	}

	digit = strtok(NULL, " ");
	num = atoi(digit);

	new->n = num;

	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}

	(*head) = new;

}

/* seperate function for error calls */
