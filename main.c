#include "monty.h"

#define MAXCHAR 1000
/**
 *
 */
/*int num_line = 0;*/

int main(int argc, char *argv[])
{
	int line_num = 0;
	int fd;
	FILE *fp;
	char *filename;
	stack_t *head = NULL;
	stack_t **main_head;
	char str[MAXCHAR];
	stack_t *new_node;
	/*stack_t *node;*/


	/* add node to list test */
	main_head = &head;
	new_node = (stack_t *) malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error");
		exit(1);
	}
	new_node->n = 10;
	new_node->next = NULL;
	(*main_head) = new_node;
	/*node = *main_head;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}*/

	/* end of test */




	/* start of the line */
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	(void)line_num;

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	filename = argv[1];

        fp = fopen(filename, "r");
	if (fp == NULL){
		printf("Could not open file %s", filename);
		return 1;
	}
	while (fgets(str, MAXCHAR, fp) != NULL)
	{
		line_num += 1;
		line_check(str, line_num, main_head);
	}
	fclose(fp);
	/*while(head != NULL)
	  {
	  free(head);
	  head = head->next;
	  }*/

	return (0);
}









/* end of the line */


























































/* end of the line */
