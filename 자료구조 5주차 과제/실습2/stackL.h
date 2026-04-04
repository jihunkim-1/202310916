#pragma once
typedef int element; //스택 원소의 자료형을 int로 정의

typedef struct stackNode { //스택 노드 구조체 정의
    element data;
    struct stackNode* link;
} stackNode;

stackNode* top; //스택의 top을 가리키는 포인터 변수 선언

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();
