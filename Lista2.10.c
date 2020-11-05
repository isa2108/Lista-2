#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int v[100],n,val,qt=0,i;
	printf("Quanridade de elementos no vetor: ");
	scanf("%d",&n);
	printf("Valor a ser encontrado: ");
	scanf("%d",&val);
	printf("Informe o vetor: \n");
	leiaVet(v,n);
	
	for(i=0; i<n; i++){
		if(v[i] == val){
			qt++;
		}
	}
	printf("O valor %d foi encontrado %d vezes no vetor\n\n",val,qt);
	printf("VALORES DO VETOR\n");
	mostraVet(v,n);
	
	system("pause");
	return 0;
}
