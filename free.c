#include "monty.h"

/**
 * free_stack - Free the memory allocated for the stack.
 * @stack: Pointer to the stack.
 */

void free_stack(Stack *stack)
{
	while (stack->top != NULL)
	{
		Node *temp = stack->top;

		stack->top = stack->top->next;
		free(temp);
	}
}
