#include "monty.h"

/**
 *push -  pushes an element to the stack.
 *@element: is the element to be pushed.
 *@head: is the position.
 *Return: the new added element.
 */

void push(stack_t **head, unsigned int element)
{
	stack_t *new;

	/*if (isdigit(element) == 0)
	  {
	  printf("L<%i>: usage: push integer\n", num_line);
	  exit(EXIT_FAILURE);
	  }*/
	new = (stack_t *) malloc(sizeof(stack_t));

	if (new == NULL)
	{
		free(new);
		exit(0);
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

