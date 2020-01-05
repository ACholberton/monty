/**
 *pop - prints all the values on the stack.
 *@list: is the stack to be printed
 *Return: the elements of the stack.
 */
void pall(stack_t **head, unsigned int element)
{
	(void)elements;
	const  stack_t stack = *head;

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
