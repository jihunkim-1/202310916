#pragma once
#define Q_SIZE 4

typedef char element; //큐 원소(element)의 자료형을 char로 정의

typedef struct {
    element queue[Q_SIZE]; //1차원 배열 큐 선언
    int front;
    int rear;
} QueueType;

QueueType* createQueue(); //큐 생성 함수
int isQueueEmpty(QueueType* Q); //큐가 비어있는지 확인하는 함수
int isQueueFull(QueueType* Q); //큐가 가득 찼는지 확인하는 함수
void enQue(QueueType* Q, element item); //큐에 원소를 추가하는 함수
element deQue(QueueType* Q); //큐에서 원소를 제거하는 함수
element peek(QueueType* Q); //큐의 front에 있는 원소를 반환하는 함수
void printQueue(QueueType* Q); //큐의 원소들을 출력하는 함수

