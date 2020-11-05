#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mt[100][100],x,i,j;
	printf("Informe n: ");
	scanf("%d",&x);

	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(i == j){
				mt[i][j]=1;
			}else
			mt[i][j]=0;
		}
	}
	mostraMat(mt,x,x);

	system("pause");
	return 0;
}
