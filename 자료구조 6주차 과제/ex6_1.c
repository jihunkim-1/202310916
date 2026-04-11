#include <stdio.h>
#include "queueS.h"


int main(void){
    QueueType* Q1 = createQueue(); //큐 생성
    element data; //큐 원소를 저장할 변수 선언
    printf("\n *****순차 큐 연산***** \n");
    printf("\n 삽입 A>>"); enQue(Q1, 'A'); printQ(Q1); //큐에 'A' 삽입 후 큐 출력
    printf("\n 삽입 B>>"); enQue(Q1, 'B'); printQ(Q1); //큐에 'B' 삽입 후 큐 출력
    printf("\n 삽입 C>>"); enQue(Q1, 'C'); printQ(Q1); //큐에 'C' 삽입 후 큐 출력
    data = peekQ(Q1); printf("\n peek item : %c \n", data); //큐의 front 원소를 확인하여 출력
    printf("\n 삭제 >>"); data = deQue(Q1); printQ(Q1); //큐에서 원소 제거 후 큐 출력
    printf("\t 삭제 데이터: %c", data); //제거된 원소 출력
    printf("\n 삭제 >>"); data = deQue(Q1); printQ(Q1); //큐에서 원소 제거 후 큐 출력
    printf("\t 삭제 데이터: %c", data); //제거된 원소 출력 원소 제거 후 큐 출력
    printf("\t 삭제 데이터: %c", data); //제거된 원소 출력
    printf("\n 삭제 >>"); data = deQue(Q1); printQ(Q1); //큐에서

    printf("\n 삽입 D>>"); enQue(Q1, 'D'); printQ(Q1); //큐에 'D' 삽입 후 큐 출력
    printf("\n 삽입 E>>"); enQue(Q1, 'E'); printQ(Q1); //큐에 'E' 삽입 후 큐 출력

    getchar();
    return 0;
}