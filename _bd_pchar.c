#include "monty.h"

/**
 * _bd_pchar - responsible for printing the char at the top of the stack
 * @stack: represents a pointer to the stack.
 * @line_number: represent the line number where the pchar function is called.
 */
void _bd_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	(void) stack;
	if (arg_data->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}
	top = arg_data->head;
	if (top->n < 0 || top->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", top->n);
}
