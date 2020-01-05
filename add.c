#include "monty.h"

/**
 * add - Entry Point
 * @head: head of linked list
 * @element: element to add to a new node if created
 * Description: adds the tops two elements of the stack)?
 */

void add(stack_t **head, unsigned int element)
{
	stack_t *top = *head;
	stack_t *second;
	int num = 0;
	(void)element;
	second = top->next;
	num = second->n;
	printf("test: %i", num);
	/*free(top);
	 *head = second;*/
}
