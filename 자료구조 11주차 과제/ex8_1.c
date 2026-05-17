#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

int main() {

	int i;
	graphType* G1 = (graphType*)malloc(sizeof(graphType)); // 그래프 구조체 동적 할당
	graphType* G2 = (graphType*)malloc(sizeof(graphType)); 
	graphType* G3 = (graphType*)malloc(sizeof(graphType)); 
	graphType* G4 = (graphType*)malloc(sizeof(graphType)); 

	//G1구성 : 정점u에 대한 간선 (u, u) 삽입순서는 v가 큰 순서로 삽입
	createGraph(G1); // G1 그래프 초기화
	for (i = 0; i < 4; i++) {
		insertVertex(G1, i); // G1에 정점 0, 1, 2, 3 삽입
	}
		insertEdge(G1, 0, 3); // G1에 간선 (0, 3) 삽입
		insertEdge(G1, 0, 1); // G1에 간선 (0, 1) 삽입
		insertEdge(G1, 1, 3); // G1에 간선 (1, 3) 삽입
		insertEdge(G1, 1, 2); // G1에 간선 (1, 2) 삽입
		insertEdge(G1, 1, 0);
		insertEdge(G1, 2, 3);
		insertEdge(G1, 2, 1);
		insertEdge(G1, 3, 2);
		insertEdge(G1, 3, 1);
		insertEdge(G1, 3, 0);
	
	//G2구성 : 정점u에 대한 간선 (u, v) 삽입순서는 v가 큰 순서로 삽입
		createGraph(G2); // G2 그래프 초기화
		for (i = 0; i < 3; i++) {
			insertVertex(G2, i); // G2에 정점 0, 1, 2 삽입
		}
			insertEdge(G2, 0, 2); // G2에 간선 (0, 2) 삽입
			insertEdge(G2, 0, 1); // G2에 간선 (0, 1) 삽입
			insertEdge(G2, 1, 2);
			insertEdge(G2, 1, 0);
			insertEdge(G2, 2, 1);
			insertEdge(G2, 2, 0);
		

	//G3구성 : 정점u에 대한 간선 (u, v) 삽입순서는 v가 큰 순서
		createGraph(G3); // G3 그래프 초기화
		for (i = 0; i < 4; i++) {
			insertVertex(G3, i); // G3에 정점 0, 1, 2, 3 삽입
		}
				insertEdge(G3, 0, 3); // G3에 간선 (0, 3) 삽입
				insertEdge(G3, 0, 1);
				insertEdge(G3, 1, 3);
				insertEdge(G3, 1, 2);
				insertEdge(G3, 2, 3);
			
		//G4구성 : 정점u에 대한 간선 (u, v) 삽입순서는 v가 큰 순서
			createGraph(G4); // G4 그래프 초기화
			for (i = 0; i < 3; i++) {
				insertVertex(G4, i); // G4에 정점 0, 1, 2 삽입
			}
				insertEdge(G4, 0, 2); // G4에 간선 (0, 2) 삽입
				insertEdge(G4, 0, 1);
				insertEdge(G4, 1, 2);
				insertEdge(G4, 1, 0);
			

		//완성된 인접행렬 출력
				printf("\nG1의 인접행렬:");
				print_adjMatrix(G1);
				printf("\nG2의 인접행렬:");
				print_adjMatrix(G2);
				printf("\nG3의 인접행렬:");
				print_adjMatrix(G3);
				printf("\nG4의 인접행렬:");
				print_adjMatrix(G4);
	getchar();
	return 0;
				
}