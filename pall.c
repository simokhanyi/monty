#include "monty.h"

/**
 * pall - data palling.
 * @stack: stacks.
 *
 * Return: returns current node.
 */

void pall(Stack *stack)
{
	Node *current = stack->top;

	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
