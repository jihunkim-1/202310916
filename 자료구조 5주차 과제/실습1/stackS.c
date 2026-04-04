#include <stdio.h>
#include "stackS.h"

int top=-1;

//스택이 공백인지 확인
int isStackEmpty(){
    if (top==-1){ //비어있는지 확인
        return 1;
    }
    else{
        return 0;
        }
}
//스택이 포화상태인지 확인
int isStackFull(){
    if (top==STACK_SIZE-1){ //가득차있는지 확인
        return 1;
    }
    else{
        return 0;
        }
}

//스택의 top에 원소를 삽입하는 연산
void push(element item){
    if (isStackFull()){     //스택이 포화상태인 경우
        printf("\n\n Stack is FULL!.\n");
        return;
    }
    else{
        stack[++top]=item;  //어딘가 빈칸비워놓고 시험에 나옴!, ++top을 하면 top이 0이 되고 stack[0]에 item이 들어감
    }
}

//스택의 top에서 원소를 삭제하는 연산
element pop(){
    if (isStackEmpty()){     //스택이 공백인 경우
        printf("\n\n Stack is EMPTY!.\n");
        return -1;
    }
    else{
        return stack[top--]; //stack[top]을 반환한 후 top을 감소시킴
    }
}
//스택의 top원소를 검색하는 연산
element peek(){
    if (isStackEmpty()){     //스택이 공백인 경우
        printf("\n\n Stack is EMPTY!.\n");
        exit(1);
    }
    else{
        return stack[top];
    }
}

//스택의 원소르 출력하는 연산
void printStack(){
    int i;
    printf("\n Stack: [");
    for(i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("]");
    }