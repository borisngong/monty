#include "monty.h"

/**
 * _bd_pall - Print all values on the stack
 * @stack: Double pointer to the stack
 * @line_number: Line number of the opcode
 */
void _bd_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temporal;

	if (arg_data->head == NULL)
		return;

	(void)line_number;
	(void)stack;

	temporal = arg_data->head;
	while (temporal != NULL)
	{
		printf("%d\n", temporal->n);
		temporal = temporal->next;
	}
}
