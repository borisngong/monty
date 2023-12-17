#include "monty.h"

/**
 * deallocate_head - responsible for deallocating the memory of the stack head
 *
 * Return: always void
 */
void deallocate_head(void)
{
	if (arg_data->head)
		deallocate_stack(arg_data->head);
	arg_data->head = NULL;
}
