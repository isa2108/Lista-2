#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],mt2[100][100],esc,n,m,mult[100],i,j;
	printf("Informe o escalar: ");
	scanf("%d",&esc);
	printf("Informe a quantidade de linhas da matriz: ");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas da matriz: ");
	scanf("%d",&m);
	
	geraMat(mt,n,m);
	mostraMat(mt,n,m);
	printf("Matriz resposta: \n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			mt2[i][j]=esc*mt[i][j];
			printf("%3d |", mt2[i][j]);
		}
			printf("\n");
	}
	system("pause");
	return 0;
}
