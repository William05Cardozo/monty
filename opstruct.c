#include "monty.h"

/**
 * delegate_op - based on tokens from single line, decide what function to call
 * @stack: double pointer to head of stack data structure
 * @op: operator, aka token[0] from getline
 * @line_number: line in byte-code file being processed, zero indexed
 * Return: int
 **/


void delegate_op(stack_t **stack, char *op, unsigned int line_number)
{
	int i = 0;

	instruction_t all_ops[] = {
		{"push", ins_push},
		{"pall", ins_pall},
		{"pint", ins_pint},
		{"pop", ins_pop},
		{"swap", ins_swap},
		{"add", ins_add},
		{"nop", ins_nop},
		{"sub", ins_sub},
		{"div", ins_div},
		{"mul", ins_mul},
		{"mod", ins_mod},
		{"pchar", ins_pchar},
		{"pstr", ins_pstr},
		{NULL, NULL}
	};

	for (i = 0; all_ops[i].opcode; i++)
	{
		if (strcmp(op, all_ops[i].opcode) == 0)
		{
			all_ops[i].f(stack, line_number);
			return;
		}
	}
	if (strlen(op) != 0 && op[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
