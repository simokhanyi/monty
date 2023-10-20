#include "monty.h"

/**
 * push - a peogram that pushes the data.
 * @stack: stacks.
 * @value: integer.
 *
 * Return: returns new node.
 */

void push(Stack *stack, int value)
{
	Node *new_node = (Node *)malloc(sizeof(Node));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}
	new_node->data = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}
