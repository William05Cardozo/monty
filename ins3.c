#include "monty.h"

/**
 * ins_mod - computes modulo of div of 2nd by top element
 * @stack: double pointer to top of stack
 * @line_number: what line in the monty bytecode file are we at?
 * Return: nothing
 * **/

void ins_mod(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->n;
	if (tmp == 0)
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	ins_pop(stack, line_number);
	(*stack)->n %= tmp;
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

	UNUSED(line_number);
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}
	while (tmp != NULL)
	{
		if (isascii(tmp->n) && tmp->n != 0)
			putchar(tmp->n);
		else
			break;
		tmp = tmp->next;
	}
	putchar('\n');
}
