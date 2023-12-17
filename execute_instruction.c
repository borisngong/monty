#include "monty.h"
/**
 * execute_instruction - Execute the current instruction
 *
 * Return: Always 0
 */
void execute_instruction(void)
{
	stack_t *stack = NULL;

	if (arg_data->k_substring == 0)
		return;

	arg_data->instruction->f(&stack, arg_data->line_number);
}
