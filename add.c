#include "monty.h"

/**
 * add - a proram that adds statck.
 * @stack: stacks.
 *
 * Return: 0 if successful or NULLfailure.
 */

void add(Stack *stack)
{
	int result;

	if (stack->size < 2)
	{
		fprintf(stderr, "Error: can't add, stack too short.\n");
		exit(EXIT_FAILURE);
	}
	result = stack->top->data + stack->top->next->data;
	pop(stack);
	stack->top->data = result;
}
