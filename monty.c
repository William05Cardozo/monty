#include "monty.h"

glob_t glob;

void stack_init(stack_t **head)
{
	*head = NULL;
	glob.top = head;
}


