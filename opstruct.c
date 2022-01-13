#include "monty.h"


void delegate_op(stack_t **stack, char *op, unsigned int line_number)
{
	int i;

	instruction_t all_ops = {
		{"push", ins_push},
		{"pall", ins_pall},
		{"pint", ins_pint},
		{"pop", ins_pop},
		{"swap", ins_swap},
		{"add", ins_add},
		{"nop", ins_nop}
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
		print("L%u: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
