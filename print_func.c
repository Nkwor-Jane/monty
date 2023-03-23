#include "main.h"

/**
 * pall - function to print all elements of the stack
 * @stack: pointer to head of stack
 * @line_number: line count
 * opcode: pall
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_k *elem;
	(void)line_number;

	if (!elem)
		return;
	elem = *stack;
	while (elem != NULL)
	{
		printf("%d\n", elem->n);
		elem = elem->next;
	}
}

/**
 * pint - function to print value at top of the stack
 * @stack: pointer to stack
 * @line_number: line number
 * opcode: pint
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
