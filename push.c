#include "monty.h"

/**
 *push -  pushes an element to the stack.
 *@element: is the element to be pushed.
 *@head: is the position.
 *Return: the new added element.
 */

void push(stack_t **head, unsigned int element)
{
	const stack_t *node = *head;
	(void)element;

        while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}


	/*stack_t *new;
	new = (stack_t *) malloc(sizeof(stack_t));

	if (new == NULL)
	{
        
	}

	new->n = element;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}

	(*head) = new;*/

}

/*
   sepaerate function for error calls
 */
