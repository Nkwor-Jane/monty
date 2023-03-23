#ifndef STACK_QUEUES_H
#define STACK_QUEUES_H

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/type.h>
#include <sys/stat.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doublt linked list node structures
 * for noe, queues, LIFOFIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
}
stack_t;

/**
 * struct instuction_s - opcode and its function
 * @opcode: the opcodes
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* functions to print elements*/
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);

/*Pop and Push functions*/
void pop(stack_t **stack, unsigned int line_number);

/* functions for nop*/
void nop(stack_t **stack, unsigned int line_number);

/*swap function*/
void swap(stack_t **stack, unsigned int line_number);
#endif
