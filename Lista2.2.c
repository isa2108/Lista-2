#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int i, maior=0, menor=1000,a[100],n,op;
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	
	if(op==1)
			geraVet(a,n);
	else
		leiaVet(a,n);	

	mostraVet(a,n);
	
	for(i=0; i<n; i++){
		if(a[i] > maior){
			maior = a[i];
		}
		if (a[i] < menor){
			menor = a[i];
		}
	}
	printf("\nMaior valor: %d\nMenor Valor: %d\n",maior,menor);
	
	
	
	
	system("pause");
	return 0;
}
