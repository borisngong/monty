#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct arg_s - Structure to hold program arguments and data.
 * @stream: Pointer to a file stream.
 * @line: Pointer to a character array representing a line of text.
 * @substring: Pointer to an array of character pointers representing
 * substrings of a line.
 * @k_substring: Number of substrings.
 * @line_number: Line number.
 * @instruction: Pointer to an instruction_t structure.
 * @stack_len: Length of a stack.
 * @stack: Stack state.
 * @head: Pointer to a stack_t structure representing the head of a stack.
 * Description: This structure holds various program arguments and data
 * required during the execution of a Monty program.
 */
typedef struct arg_s
{
	FILE *stream;
	char *line;
	char **substring;
	int k_substring;
	unsigned int line_number;
	instruction_t *instruction;
	int stack_len;
	int stack;
	stack_t *head;
} arg_t;

extern arg_t *arg_data;

void deallocate_arg_data(void);
void deallocate_head(void);
void deallocate_stack(stack_t *head);
void deallocate_substrings(void);
void execute_instruction(void);
void handle_close_stream();
void obtain_file_stream(char *filename);
int is_numeric_value(char *string);
void obtain_instruction(void);
void process_unknown_instruction(void);
void setup_arguments(void);
void tokenize_line(void);
void verify_commandline_arguments(int argc);
void arg_data_complete_deallocation(void);
void remove_stack_node(void);
void _bd_push(stack_t **stack, unsigned int line_number);
void _bd_pall(stack_t **stack, unsigned int line_number);
void _bd_pop(stack_t **stack, unsigned int line_number);
void _bd_swap(stack_t **stack, unsigned int line_number);
void _bd_pint(stack_t **stack, unsigned int line_number);
void _bd_add(stack_t **stack, unsigned int line_number);
void _bd_nop(stack_t **stack, unsigned int line_number);
void _bd_sub(stack_t **stack, unsigned int line_number);
void _bd_div(stack_t **stack, unsigned int line_number);
void _bd_mul(stack_t **stack, unsigned int line_number);
void _bd_mod (stack_t ** stack, unsigned int line_number);
int check_is_comment(const char *line);
void handle_memory_allocation_failure(void);
void handle_file_stream_failure(char *file_name);
void _bd_pchar(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
