#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],n,m,i,j,dp;
	printf("Quantidade de linhas da matriz: ");
	scanf("%d",&n);
	printf("Quantidade de colunas da matriz: ");
	scanf("%d",&m);
	geraMat(mt,n,m);
	mostraMat(mt,n,m);
	printf("\nA diagonal principal: \n");		
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(i==j){
					printf("%d |",mt[i][j]);
			}
		}				
	}
	printf("\n");

	system("pause");
	return 0;
}
