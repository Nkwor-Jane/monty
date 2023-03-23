#include "main.h"

/**
 * push - add element to top of stack/queue
 * @stack: pointer to stack
 * @line_number: line number
 * Return: 0 on success, -1 on filure
 */
void  push(stack_t **stack, unsigned int line_number)
{
}
/**
 * pop - delete element at top of stack
 * @stack: pointer to head of stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_k *item = (*stack);

	if (*stack)
	{
		(*stack) = (*stack)->next;
		free(item);
		if (*stack)
			(*stack)->prev = NULL;
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		fclose(global.fd);
		free(global.opcode);
		exit(EXIT_FAILURE);
	}
}
