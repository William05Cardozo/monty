#include "monty.h"

/**
 * ins_mod - computes modulo of div of 2nd by top element
 * @stack: double pointer to top of stack
 * @line_number: what line in the monty bytecode file are we at?
 * Return: nothing
 * **/

void ins_mod(stack_t **stack, unsigned int line_number)
{

}

/**
 * ins_pchar - print char at top of stack
 * @stack: double pointer to top of stack
 * @line_number: what line in the monty bytecode file are we at?
 * Return: nothing
 * **/

void ins_pchar(stack_t **stack, unsigned int line_number)
{
	int i;

	if (*stack == NULL)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	i = (*stack)->n;
	if (!(i >= 0 && i <= 127))
	{
		printf("L%u: can't pchar, value out of range", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(i);
	putchar('\n');
}

/**
 * ins_pstr - prints out string starting from top of stack
 * @stack: double pointer to top of stack
 * @line_number: what line in the monty bytecode file are we at?
 * **/

void ins_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
}
