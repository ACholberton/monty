#include "monty.h"

#define MAXCHAR 1000
/**
 * main - Entry Point
 * @argc: num of elements in argv
 * @argv: array of parameters
 * Description: opens a file and interprets the text for the stack)?
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int line_num = 1;
	FILE *fp;
	char *filename;
	stack_t *head = NULL;
	stack_t **main_head;
	char str[MAXCHAR];

	main_head = &head;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Could not open file %s\n", filename);
		return (1);
	}

	while (fgets(str, MAXCHAR, fp) != NULL)
	{
		line_check(str, line_num, main_head);
		line_num += 1;
	}
	fclose(fp);
	/* call function to free all */
	return (0);
}
