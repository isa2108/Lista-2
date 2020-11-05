#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int A[100],B[100],N,M,i,j;
	
	printf("Quantidade de elementos do vetor A:");
	scanf("%d",&N);	
	printf("Quantidade de elementos do vetor B:");
	scanf("%d",&M);
	printf("Informe os elementos do vetor A: \n");
	leiaVet(A,N);
	printf("Informe os elementos do vetor B: \n");
	leiaVet(B,M);
	printf("Elementos comuns aos dois vetores: \n");
	
	if(N>M || N==M){	
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
		if(A[i] == B[j]){
			printf("%d\n",A[i]);
		}
		}
	}
	}else if(N<M){	
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
		if(B[i] == A[i]){
			printf("%d\n",B[i]);
		}
	}
	}
	}			
	system("pause");
	return 0;
}
