#include <stdio.h>
#include "queueS.h"
#include <stdlib.h>

//공백 순차 큐를 생성하는 연산
QueueType* createQueue(){
    QueueType* Q;
    Q = (QueueType*)malloc(sizeof(QueueType)); //동적 메모리 할당
    Q->front = -1; //front 초기화
    Q->rear = -1; //rear 초기화
    return Q;
}

//순차 큐가 공백 상태인지 확인하는 연산
int isQueueEmpty(QueueType* Q){
    if(Q->front == Q->rear) 
        printf("Queue is empty! \n\t");
    else return 0; //그렇지 않으면 큐는 공백 상태가 아님
}

//순차 큐가 포화 상태인지 확인하는 연산
int isQueueFull(QueueType* Q){
    if(Q->rear == Q_SIZE - 1) {
        printf("Queue is full! \n\t");
        return 1;
        }
    else {
        return 0;
        }       //그렇지 않으면 큐는 포화 상태가 아님
}

//순차 큐의 rear에 원소를 삽입하는 연산
void enQue(QueueType* Q, element item){
    if(isQueueFull(Q)) return; //큐가 포화 상태이면 삽입 연산 종료
    else {
        Q->rear++; //rear 증가
        Q->queue[Q->rear] = item; //item을 rear 위치에 삽입
    }
}

//순차 큐의 front에서 원소를 삭제하는 연산
element deQue(QueueType* Q){
    if(isQueueEmpty(Q)) {
        return;
            }//큐가 공백 상태이면 삭제 연산 종료
    else {
        Q->front++; //front 증가
        return Q->queue[Q->front]; //삭제된 원소 반환
        }
    }
    
    //순차 큐의 가장 앞에 있는 원소를 검색하는 연산
element peekQ(QueueType* Q){
    if(isQueueEmpty(Q)) return; //큐가 공백 상태이면 검색 연산 종료
    else {
        return Q->queue[Q->front + 1]; //front 다음 위치의 원소 반환
    }
}

//순차 큐의 원소들을 출력하는 연산
void printQ(QueueType* Q){
    printf("Queue : [");
    for(int i = Q->front + 1; i <= Q->rear; i++) {
        printf("%3c", Q->queue[i]); //큐의 원소 출력
    }
    printf("] ");
}