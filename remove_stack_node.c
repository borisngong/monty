#include "monty.h"
/**
* remove_stack_node - reponsible for deleting node at the head/top
* Return: always void
*/
void remove_stack_node(void)
{
	stack_t *temporal;

	temporal = arg_data->head;
	arg_data->head = temporal->next;
	free(temporal);
}
