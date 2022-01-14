#include "monty.h"

/**
 * ins_push - pushes an element to the stack
 * @stack: double pointer to the first node
 * @line_number: value of new node
 * Return: nothing
 **/

void ins_push(stack_t **stack, unsigned int line_number)
{
	stack_t *element = malloc(sizeof(stack_t));
	char *op;
	int num;

	if (element == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	op = strtok(NULL, DELIMS);
	if (op == NULL || stack == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = _strtol(op, line_number);
	element->n = num;
	element->prev = NULL;
	element->next = *stack;
	if (element->next != NULL)
		(element->next)->prev = element;
	*stack = element;
}

/**
 * ins_pall - prints all values on the stack, starting from top
 * @stack: double pointer to the first node
 * @line_number: value of new node
 * Return: nothing
 **/

void ins_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;

	UNUSED(line_number);
	while (element != NULL)
	{
		printf("%d\n", element->n);
		element = element->next;
	}
}

/**
 * ins_pint - Function print the value at top of stack
 * @stack: Double Pointer
 * @line_number: Value of new node
 * Return: No Line
 **/

void ins_pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * ins_pop - Function remove elements of stack
 * @stack: Double Pointer
 * @line_number: Value of new node
 * Return: No Line
 **/

void ins_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	node = *stack;
	(*stack) = (*stack)->next;
	free(node);
}

/**
 * ins_swap - swaps 2 elements of the stack
 * @stack: double pointer to the first node
 * @line_number: value of new node
 * **/

void ins_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	UNUSED(line_number);
	if (!(*stack) || !((*stack)->next))
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	(*stack)->prev = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
	if (tmp->next)
		tmp->next->prev = *stack;
	tmp->next = *stack;
	(*stack) = (*stack)->prev;
}
