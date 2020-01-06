#include "monty.h"

/**
 * get_func - Entry Point
 * @s: string that contains func name
 * @head: head of linked list to pass to function pointer
 * @element: element for new node to pass to function pointer
 * Description: Finds function based off string name given)?
 * Return: 1 (SUCCESS)
 */

int get_func(char *s, stack_t **head, unsigned int element)
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
			ops[i].f(head, element);
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
	int num = 1;
	int j = 0;
	(void)line_num;

	keyword = strtok(str, " ");
	keyword = strtok(keyword, "\n");
	keyword = strtok(keyword, "\t");
	j = strlen(keyword) + 1;
	if (isdigit(str[j]))
	{
		num = str[j] - '0';
	}
	else
	{
		/* report error that given digit isnt a digit*/
	}
	if (get_func(keyword, head, num) == 0)
	{
		printf("get_func failed\n");
	}

}
