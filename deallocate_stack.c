#include "monty.h"
/**
 * deallocate_stack - responsible for deallocating the memory of a
 * linked list (stack)
 *
 * @head: represnts pointer to the head of the stack
 * Return: always 0
 */
void deallocate_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		deallocate_stack(head->next);
	}

	free(head);
}
