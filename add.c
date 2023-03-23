#include "main.h"
/**
 * add - function that adds top two elements of the stack
 * @stack: pointer to head of stack
 * @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if((*stack) == NULL ||(*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		fclose(global.fd);
		free(global.opcode);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = (*stack);
	(*stack) = (*stack)->next;
	(*stack)->n += (*stack)->prev->n;
	(*stack)->prev = NULL;
	free(temp);
}
