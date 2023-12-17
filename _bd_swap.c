#include "monty.h"

/**
 * _bd_swap - responsible for swapping the top two elements of the stack
 * @stack: respresents a pointer to the stack
 * @line_number: represents a Line number where the swap function is called.
 * Return: always void
 */
void _bd_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temporal1;
	stack_t *temporal2;

	(void) stack;
	if (arg_data->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}

	temporal1 = arg_data->head;
	temporal2 = temporal1->next;
	temporal1->next = temporal2->next;
	if (temporal1->next)
		temporal1->next->prev = temporal1;
	temporal2->next = temporal1;
	temporal1->prev = temporal2;
	temporal2->prev = NULL;
	arg_data->head = temporal2;
}
