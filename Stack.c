#define STACK_SIZE 256

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Stack* new_stack()
{
	Stack* ptr = (Stack*)malloc(sizeof(Stack));
	ptr->maxsize = STACK_SIZE;
	ptr->top = -1;
	ptr->items = (int*)calloc(1024, sizeof(int));

	return ptr;
}

void push(Stack* ptr, int x)
{
	if (!is_full(ptr))
	{
		++ptr->top;
		ptr->items[ptr->top] = x;
		printf("Written %d with index %d\n", x, ptr->top);
	}
	else
		printf("Stack overflow!\n");
}

int pop(Stack* ptr)
{
	if (!is_empty(ptr))
		return ptr->items[ptr->top--];
	else
	{
		printf("Stack is empty\n");
		exit(EXIT_FAILURE);
	}

}

int peek(Stack* ptr) 
{
	if (!is_empty(ptr))
		return ptr->items[ptr->top];
	else
	{
		printf("Stack is empty\n");
		exit(EXIT_FAILURE);
	}
}

int is_empty(Stack* ptr)
{
	return ptr->top == -1;
}

int is_full(Stack* ptr)
{
	return ptr->top == ptr->maxsize - 1;
}
