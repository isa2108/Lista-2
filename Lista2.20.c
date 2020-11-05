#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],n,m,i,j,menor;
	printf("Informe a quantidade de linhas da matriz: ");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas da matriz: ");
	scanf("%d",&m);
	leiaMat(mt,n,m);
	mostraMat(mt,n,m);
	menor = mt[0][0];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(mt[i][j] < menor){
				menor = mt[i][j];
			}
		}
	}
	printf("O menor numero da matriz: %d\n",menor);
	
	system("pause");
	return 0;
}
