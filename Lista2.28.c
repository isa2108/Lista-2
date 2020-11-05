#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],i,j,x,soma;
	printf("Ordem da matriz: ");
	scanf("%d",&x);
	geraMat(mt,x,x);
	mostraMat(mt,x,x);
	printf("\ndiagonal principal: \n");
		
	for(i=0; i<x; i++){
		for(j=0; j<x; j++){
			if(i==j){
					printf("%d |",mt[i][j]);
					soma=soma+mt[i][j];
			}
		}				
	}
	printf("\n");
	printf("Soma da diagonal principal: %d\n",soma);

	system("pause");
	return 0;
}
