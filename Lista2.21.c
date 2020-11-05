#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int qntd(int mt[][100],int n,int m,int c){
	int i,j,cont;
		for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(mt[i][j] == c){
				cont++;
			}
		}
	}
	return cont;
}

int main(){
	int mt[100][100],n,m,i,j,x,resp;
	printf("Informe a quantidade de linhas da matriz: ");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas da matriz: ");
	scanf("%d",&m);
	printf("Informe um valor: ");
	scanf("%d",&x);
	geraMat(mt,n,m);
	mostraMat(mt,n,m);		
	resp = qntd(mt,n,m,x);
	printf("O numero %d aparece %d vezes na matriz\n",x,resp);
	
	system("pause");
	return 0;
}
