#pragma once
#define STACK_SIZE 100

typedef int element;
element stack[STACK_SIZE]; //int의 배열로 스택 선언

int isStackEmpty();
int isStackFull();
void push(element item);
element pop();
element peek();
void printStack();