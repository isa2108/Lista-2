#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],x,i,j,soma;
	printf("Ordem da matriz: ");
	scanf("%d",&x);	
	geraMat(mt,x,x);
	mostraMat(mt,x,x);
	printf("\ndiagonal secundaria: \n");
	j=x;
	for(i=0; i<x; i++){
		j--;		
		printf("%d |",mt[i][j]);
		soma=soma+mt[i][j];
			
		}					
	printf("\n");
	printf("Soma da diagonal secundaria: %d\n",soma);

	system("pause");
	return 0;
}
