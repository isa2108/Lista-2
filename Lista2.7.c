#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int vetor1[100],vetor2[100],vr[100],n,i,op;
	
	printf("Quantos elementos nos vetores: ");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	
	if(op==1){
			geraVet(vetor1,n);
			geraVet(vetor2,n);
			
	} else{
	printf("Primeiro vetor: \n");
		leiaVet(vetor1,n);
	printf("Segundo vetor: \n");
		leiaVet(vetor2,n);
	}
	printf("VETOR RESULTANTE \n");
	for(i=0; i<n; i++){
		vr[i] = vetor1[i] * vetor2[i];
		
		printf("Posicao[%d]: %d x %d = %d\n",i,vetor1[i],vetor2[i],vr[i]);
		
	}
	
	system("pause");
	return 0;
}
