#include "monty.h"
/**
 * _bd_pstr - responsible for printing the string starting at the top
 * of the stack
 * @stack: represents a ointer to the stack.
 * @line_number: represents the line number where the pstr function is called.
 */
void _bd_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	(void) stack;
	(void) line_number;

	top = arg_data->head;

	while (top != NULL)
	{
		if (top->n <= 0 || top->n > 127)
			break;
		printf("%c", top->n);
		top = top->next;
	}

	printf("\n");
}
