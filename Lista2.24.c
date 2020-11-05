#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],n,m,i,j,ds;
	printf("Informe a quantidade de linhas da matriz: ");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas da matriz: ");
	scanf("%d",&m);
	geraMat(mt,n,m);
	mostraMat(mt,n,m);
	printf("\nA diagonal secundaria: \n");
		j=m;
	for(i=0; i<n; i++){
		j--;		
		printf("%d |",mt[i][j]);		
		}					
	printf("\n");

	system("pause");
	return 0;
}
