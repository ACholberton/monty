#include "monty.h"

/**
 * get_func - Entry Point
 * @s: string that contains func name
 * @head: head of linked list to pass to function pointer
 * @element: element for new node to pass to function pointer
 * Description: Finds function based off string name given)?
 * Return: 1 (SUCCESS)
 */

int get_func(char *s, stack_t **head, unsigned int line)
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

	while (ops[i].opcode != '\0')
	{
		if (strcmp(ops[i].opcode, s) == 0)
		{
			ops[i].f(head, line);
			return (1);
		}
		i++;
	}
	/* returns 0 to indicate function failed */
	return (0);
}

/**
 * line_check - Entry Point
 * @str: string given from each line of file
 * @line_num: current number of line in file
 * @head: head of linked list
 * Description: checks the file, passes data to the correct function)?
 */

void line_check(char *str, int line_num, stack_t **head)
{
	char *keyword;

	keyword = strtok(str, " \n\t");

	if (get_func(keyword, head, line_num) == 0)
	{
		dprintf(STDERR_FILENO, "L<%i>: unknown instruction %s\n", line_num, keyword);
	}
}
