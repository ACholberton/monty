#include "monty.h"

/**
 *
 */

void (*get_func(char *s, stack_t **head, unsigned int element))
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{'\0', NULL}
	};
	int i = 0;

	/*if (!stack)
	  return (NULL);*/
	while (ops[i].opcode != NULL)
	{
		if (strcmp(s, ops[i].opcode) == 0)
		{
			ops[i].f(head, element);
		}
		i++;
	}

	return (NULL);
}

void line_check(char *str, int line_num, stack_t **head)
{
	char *keyword;
	int num = 1;
	int j = 0;
	(void)line_num;

	keyword = strtok(str, " ");
	j = strlen(keyword) + 1;
	if (isdigit(str[j]))
	{
		num = str[j] - '0';
	}
	else
	{
		/* report error that given digit isnt a digit*/
	}
	get_func(keyword, head, num);

}
