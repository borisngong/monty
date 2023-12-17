#include "monty.h"
/**
 * mod - reponsible for Computing the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * @stack: represents a pointer to the stack.
 * @line_number: represents a line number where the mod function is called.
 */
void _bd_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second_top;

	(void) stack;
	if (arg_data->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}
	top = arg_data->head;
	second_top = top->next;
	if (top->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}
	second_top->n = second_top->n % top->n;
	remove_stack_node();
	arg_data->stack_len -= 1;
}
