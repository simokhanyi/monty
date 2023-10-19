#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE 1000

/**
 * struct Node - doubly linked list representation of a stack (or queue)
 * @data: integer
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct Node
{
	int data;
	struct Node *next;
} Node;

/**
 * struct Stack - doubly linked list representation of a stack (or queue)
 * @size: integer
 * @top: points to the previous element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct Stack
{
	Node *top;
	int size;
} Stack;

void init_stack(Stack *stack);
void push(Stack *stack, int value);
void pop(Stack *stack);
void pint(Stack *stack);
void pall(Stack *stack);
void swap(Stack *stack);
void execute(Stack *stack, char *opcode, int value);
int main(int argc, char *argv[]);
void add(Stack *stack);

#endif
