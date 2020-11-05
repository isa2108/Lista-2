#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int v[100],n,valor,op,op1,i;
	
	printf("Informe a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	printf("Digite um numero: ");
	scanf("%d",&valor);
	
	geraVet(v,n);
	
	for(i=0; i<n; i++){
		if(valor == v[i]){
			op=1;
			op1=i;
			break;
		}
	}	
	if(op == 1){
		printf("O numero %d esta na posicao %d do vetor!\n",valor,op1);
	} else 
	printf("O numero %d nao esta no vetor!\n",valor);
	mostraVet(v,n);
	
	
	system("pause");
	return 0;
}
