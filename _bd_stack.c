#include "monty.h"

/**
 * _bd_stack - reponsible for setting the format of the data to a stack
 * @stack: represents a pointer to the stack.
 * @line_number: represents the line number where the stack function is called.
 */
void _bd_stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	arg_data->stack = 1;
}
