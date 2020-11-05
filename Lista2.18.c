#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],n,m,x,i,j,cont=0;
	printf("Informe a quantidade de linhas da matriz:");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas da matriz:");
	scanf("%d",&m);
	printf("Valor de X:");
	scanf ("%d",&x);
	leiaMat(mt,n,m);
	mostraMat(mt,n,m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(mt[i][j] > x){
				cont++;
			}
		}
	}
	printf("Existem %d numeros maiores que %d na matriz\n",cont,x);

	system("pause");
	return 0;
}
