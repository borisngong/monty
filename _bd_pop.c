#include "monty.h"

/**
 * _bd_pop - Removes the top element from the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pop function is called.
 */
void _bd_pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arg_data->head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}

	remove_stack_node();
	arg_data->stack_len -= 1;
}
