#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],n,m,i,j,maior=0;
	printf("Informe a quantidade de linhas da matriz: ");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas da matriz: ");
	scanf("%d",&m);
	leiaMat(mt,n,m);
	mostraMat(mt,n,m);	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(mt[i][j] > maior){
				maior = mt[i][j];
			}
		}
	}
	printf("O maior numero da matriz: %d\n",maior);
	
	system("pause");
	return 0;
}
