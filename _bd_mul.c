#include "monty.h"

/**
 * _bd_mul - responsible for multiplying the top two elements of the stack.
 * @stack: represents the pointer to the stack.
 * @line_number: represents the line number where the mul function is called.
 */
void _bd_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second_top;

	(void) stack;
	if (arg_data->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}
	top = arg_data->head;
	second_top = top->next;

	second_top->n = second_top->n * top->n;
	remove_stack_node();
	arg_data->stack_len -= 1;
}
