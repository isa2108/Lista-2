#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int m1[100][100],m2[100][100],n,soma[100][100],i,j,sub[100][100],c;
	char op;
	printf("Informe a ordem das matrizes: ");
	scanf("%d",&n);
	printf("Informe os valores da primeira matriz: \n");
	leiaMat(m1,n,n);
	printf("Informe os valores da segunda matriz: \n");
	leiaMat(m2,n,n);
	
	
	printf("Digite a letra desejada: \na)Somar as duas matrizes\nb)Subtrair a primeira matriz da segunda\nc)Adicionar uma constante as duas matrizes\nd)Imprimir as duas matrizes\n");
	scanf("%s",&op);
	
	if(op == 'a'){
		printf("Soma das matrizes: \n");
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				soma[i][j]=m1[i][j]+m2[i][j];
				printf("%3d |",soma[i][j]);
			}
			printf("\n");
		}
	}
	else if(op == 'b'){
		printf("Subtracao das matrizes: \n");
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				sub[i][j]=m1[i][j]-m2[i][j];
				printf("%3d |",sub[i][j]);
			}
			printf("\n");
		}
	}
	else if(op == 'c'){
		printf("Adicionar uma constante: \n");
		printf("Informe a constante: ");
		scanf("%d",&c);
		printf("Primeira matriz + constante %d:\n",c);
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				m1[i][j]=m1[i][j]+c;
				printf("%3d |",m1[i][j]);
			}
			printf("\n");
		}
		printf("Segunda matriz + constante %d:\n",c);
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				m2[i][j]=m2[i][j]+c;
				printf("%3d |",m2[i][j]);
			}
			printf("\n");
		}
	}
	
	else if(op == 'd'){
		printf("Primeira matriz: \n");
		mostraMat(m1,n,n);
		printf("Segunda matriz: \n");
		mostraMat(m2,n,n);
	}

	system("pause");
	return 0;
}
