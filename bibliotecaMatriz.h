#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leiaMat(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("M[%d][%d]:",i,j);
			scanf("%d",&m[i][j]);
		}// fim for j
	}// fim for i
	
}
//-------------------------
void geraMat(int m[][100], int linhas, int cols){
	int i, j;
	srand(time(NULL));
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m[i][j] = rand()%50;
		}// fim for j
	}// fim for i
	
}
//------------------------
void mostraMat(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%3d |", m[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
}
//-----------------------
