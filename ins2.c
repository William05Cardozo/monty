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

/**
 * ins_sub - Function substracts top node from second
 * @stack: Double Pointer
 * @line_number: Value of node
 * Return: No Line
 **/

void ins_sub(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	ins_pop(stack, line_number);
	(*stack)->n -= tmp;
}

/**
 * ins_div - Function divide secod and top node
 * @stack: Double Pointer
 * @line_number: Value of node
 * Return: No Line
 **/

void ins_div(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	if (tmp == 0)
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	ins_pop(stack, line_number);
	(*stack)->n /= tmp;
}



void ins_mul(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	ins_pop(stack, line_number);
	(*stack)->n *= tmp;
}
