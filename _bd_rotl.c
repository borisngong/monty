#include "monty.h"

/**
 * _bd_rotl - responsible for rotating the stack to the top
 * @stack: represents a pointer to the stack.
 * @line_number: represents a line number where the rotl function is called.
 */
void _bd_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second_top;

	(void) stack;
	(void) line_number;

	if (arg_data->stack_len < 2)
		return;

	top = arg_data->head;
	second_top = top->next;
	arg_data->head = second_top;

	while (second_top)
	{
		if (second_top->next == NULL)
		{
			second_top->next = top;
			top->next = NULL;
			top->prev = second_top;
			break;
		}

		second_top = second_top->next;
	}
}
