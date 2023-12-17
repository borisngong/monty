#include "monty.h"

/**
 * _bd_push - Push a value to the stack
 * @stack: Double pointer to the stack
 * @line_number: Line number of the opcode
 */
void _bd_push(stack_t **stack, unsigned int line_number)
{
	if (arg_data->k_substring <= 1 || !(is_numeric_value(arg_data->substring[1])))
	{
		deallocate_arg_data();
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		handle_memory_allocation_failure();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int)atoi(arg_data->substring[1]);
	if (arg_data->head == NULL)
		arg_data->head = *stack;
	else
	{
		if (arg_data->stack)
		{
			(*stack)->next = arg_data->head;
			arg_data->head->prev = *stack;
			arg_data->head = *stack;
		}
		else
		{
			stack_t *tmp = arg_data->head;

			while (tmp->next)
				tmp = tmp->next;
			tmp->next = *stack;
			(*stack)->prev = tmp;
		}
	}
	arg_data->stack_len += 1;
}
