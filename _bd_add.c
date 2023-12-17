#include "monty.h"

/**
 * _bd_add - reponsible for adding the top two elements of the stack.
 * @stack: represents a pointer to the stack.
 * @line_number: respresents a line number where the add function is called.
 * Return: always void
 */void _bd_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temporal1, *temporal2;

	(void) stack;
	if (arg_data->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}

	temporal1 = arg_data->head;
	temporal2 = temporal1->next;

	temporal2->n = temporal1->n + temporal2->n;
	remove_stack_node();

	arg_data->stack_len -= 1;
}

