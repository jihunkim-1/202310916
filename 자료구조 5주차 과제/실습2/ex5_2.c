#include <stdio.h>
#include "stackL.h"

int main(void) {
 element item;
 top=NULL;
 printf("\n연결 스택 연산 **\n");
 printStack();

 push(1); printStack(); //1 삽입
 push(2); printStack(); //2 삽입
 push(3); printStack(); //3 삽입

 item=peek(); printStack(); //top 원소 검색,출력
 printf("peek => %d",item);

 item=pop(); printStack(); //top 원소 삭제,출력
 printf("pop => %d",item);

 item=pop(); printStack(); //top 원소 삭제,출력
 printf("pop => %d",item);

 item=pop(); printStack(); //top 원소 삭제,출력
 printf("pop => %d\n",item);

 getchar();
 return 0;
}