#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int num[100], n, i, soma=0, op;
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	if(op==1)
		geraVet(num,n);
	else
		leiaVet(num,n);	
	mostraVet(num,n);
	for(i=0;i<n;i++)
       soma+= num[i];
	   	
	printf("Soma do vetor:%d\n",soma);
	
	system("pause");
	return 0;
}
