#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int vetA[100],vetB[100],n,x,i;
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	printf("Informe o valor: ");
	scanf("%d",&x);
	
	leiaVet(vetA,n);	
	
	printf("VETOR RESULTANTE\n");
	for(i=0; i<n; i++){
		vetB[i] = vetA[i] * x;
		
		printf("Posicao[%d]: %d x %d = %d\n",i,vetA[i],x,vetB[i]);
	
	}
	
	
	
	
	
	system("pause");
	return 0;
}
