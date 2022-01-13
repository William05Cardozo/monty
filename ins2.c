#include "monty.h"

/**
 * ins_add - adds top 2 nodes of the stack
 * @stack: double pointer to top of stack
 * @line_number: value of node
 * Return: nothing
 * **/

void ins_add(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->n;
	ins_pop(stack, line_number);
	(*stack)->n += tmp;
}

/**
 * ins_nop - doesn't do anything
 * @stack: double pointer to top of stack
 * @line_number: value of node
 * Return: nothing
 * **/

void ins_nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
}
