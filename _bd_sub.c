#include "monty.h"
/**
 * _bd_sub - reponsible for subtracting the top element from the second
 * top element of the stack.
 * @stack: represents a pointer to the top of the stack.
 * @line_number: represents the line number of the opcode.
 */
void _bd_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second_top;

	(void) stack;
	if (arg_data->stack_len < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}

	top = arg_data->head;
	second_top = top->next;
	second_top->n = second_top->n - top->n;
	remove_stack_node();
	arg_data->stack_len -= 1;
}
