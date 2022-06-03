#pragma once

typedef struct Stack
{
	int maxsize;
	int top;
	int* items;
} Stack;

Stack* new_stack();

void push(Stack* ptr, int x);
int pop(Stack* ptr);
int peek(Stack* ptr);

int size(Stack* ptr);
int is_empty(Stack* ptr);
int is_full(Stack* ptr);

