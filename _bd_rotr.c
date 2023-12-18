#include "monty.h"

/**
 * _bd_rotr - reponsible for rotating the stack to the bottom
 * @stack: represents a pointer to the stack.
 * @line_number: represents the line number where the rotr function is called.
 */
void _bd_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	(void) stack;
	(void) line_number;

	if (arg_data->stack_len < 2)
		return;

	top = arg_data->head;
	while (top)
	{
		if (top->next == NULL)
		{
			bottom = top;
			break;
		}
		top = top->next;
	}

	bottom->prev->next = NULL;
	bottom->next = arg_data->head;
	bottom->prev = NULL;

	arg_data->head = bottom;
}
