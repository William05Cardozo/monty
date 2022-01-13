#include "monty.h"

glob_t glob;

void stack_init(stack_t **head)
{
	*head = NULL;
	glob.top = head;
}

void free_all(void)
{
	stack_t *tmp1, *tmp2 = NULL;

	tmp1 = *(glob.top);
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
}

int main(int argc, char **argv)
{
	stack_t *head;

	stack_init(&head);
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	process_file(argv[1], &head);
	exit(EXIT_FAILURE);
}
