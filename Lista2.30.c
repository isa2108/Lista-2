#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],mtt[3][4],n=4,m=3,i,j,k=0,vet[13];
	printf("Informe os valores da matriz: \n");
	
	leiaMat(mt,n,m);
	mostraMat(mt,n,m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			k++;
			vet[k]=mt[i][j];
			
		}
	}
	printf("\nMatriz transposta: \n");
k=0;
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			k++;
		
			mtt[i][j]=vet[k];
		
		}
		
	}
	
		for(i=0;i<3;i++){
		for(j=0;j<4;j++){
		
			printf("%3d |", mtt[j][i]);
		}
		printf("\n");
	
}


	system("pause");
	return 0;
}
