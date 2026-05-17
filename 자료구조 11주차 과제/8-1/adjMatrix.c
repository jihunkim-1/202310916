#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

//공백 그래프를 생성하는 연산
void createGraph(graphType* g) {
	g->n = 0; // 그래프의 정점 개수를 0으로 초기화
	for (int i = 0; i < MAX_VERTICES; i++) {
		for (int j = 0; j < MAX_VERTICES; j++) {
			g->adjMatrix[i][j] = 0; 
			// 모든 간선을 0으로 초기화 (간선 없음)
		}
	}
}

//그래프 g에 정점 v를 삽입하는 연산
void insertVertex(graphType* g, int v) {
	if (g->n + 1 > MAX_VERTICES) {
		printf("그래프: 정점의 개수를 초과하였습니다\n");
		return;
	}
	g->n++; // 그래프의 정점 개수를 증가
}

//그래프 g에 간선 (u, v)를 삽입하는 연산
void insertEdge(graphType* g, int u, int v) {
	if (u >= g->n || v >= g->n) {
		printf("그래프에 없는 정점입니다\n");
		return;
	}
	g->adjMatrix[u][v] = 1; // 간선 (u, v)의 원소값을 1로 설정
}

//그래프 g의 2차원 배열 값을 순서대로 출력하는 연산
void print_adjMatrix(graphType* g) {
	for (int i = 0; i < g->n; i++) {
		printf("\n\t\t");
		for (int j = 0; j < g->n; j++) {
			printf("%2d ", g->adjMatrix[i][j]);
			// 간선 존재 여부를 출력
		}
	}
}