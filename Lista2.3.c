#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int v[100],n,op,impar,i;
	printf("Informe a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	
	if(op == 1){
		geraVet(v,n);
	}else 
		leiaVet(v,n);
		
		mostraVet(v,n);
		
	for(i=0; i<n; i++){
		if(v[i]%2 != 0){
			impar++;
		}
	}
	
	printf("Quantidade de impares: %d\n", impar);
	
	
	
	
	system("pause");
	return 0;
}
