#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int v[100],n,i,vp=0,mp=0,op;
	
	printf("Informe a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	
	if(op == 1){
		geraVet(v,n);
	}else 
		leiaVet(v,n);
	
	for(i=0; i<n; i++){
		if(v[i]%2 == 0){
			vp++;
			mp=mp+v[i];
		}
	}
	
	mostraVet(v,n);
	
	printf("Quantidade de valores pares: %d\n",vp);
	printf("Media dos valores pares: %d\n",mp/vp);
	
	
	
	
	system("pause");
	return 0;
}
