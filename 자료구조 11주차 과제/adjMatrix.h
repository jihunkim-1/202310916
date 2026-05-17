#pragma once
#define MAX_VERTICES 30

//ㄱ래프를 인접행렬로 표현하기 위한 구조체
typedef struct graphType {
	int n; // 정점의 개수
	int adjMatrix[MAX_VERTICES][MAX_VERTICES]; 
	// 그래프에 대한 30x30의 2차원 배열
} graphType;

void createGraph(graphType* g); // 그래프 초기화 함수
void insertVertex(graphType* g, int v); // 정점 추가 함수
void insertEdge(graphType* g, int u, int v); // 간선 추가 함수
void print_adjMatrix(graphType* g); // 인접행렬 출력 함수