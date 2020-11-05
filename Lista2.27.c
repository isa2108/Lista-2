#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt1[100][100],mt2[100][100],x,i,j,soma[100][100];
	printf("Informe a ordem das matrizes: ");
	scanf("%d",&x);
	
	geraMat(mt1,x,x);
	geraMat(mt2,x,x);
	printf("Primeira Matriz: \n");
	mostraMat(mt1,x,x);
	printf("Segunda Matriz: \n");
	mostraMat(mt2,x,x);
	printf("\nMatriz resposta: \n");
	
	for(i=0; i<x; i++){
		for(j=0; j<x; j++){
			soma[i][j]=mt1[i][j]+mt2[i][j];
			printf("%3d |", soma[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
