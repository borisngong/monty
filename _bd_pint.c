#include "monty.h"
/**
 * _bd_pint - responsible for printing the value at the top of the stack.
 * @stack: represents the pointer to the stack.
 * @line_number: represents theLine number where the pint function is called.
 * Return: always void
 */
void _bd_pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arg_data->head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		arg_data_complete_deallocation();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arg_data->head->n);
}
