#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int N,v[100],i,maior,volta,s;
	
	printf("Informe a quantidade de voltas: ");
	scanf("%d",&N);
	
	printf("Informe o tempo de cada volta em segundos: \n");
	leiaVet(v,N);
	
	for(i=0; i<N; i++){
		s=s+v[i];
		if(v[i]>maior){
			maior=v[i];
			volta=i;
		}
	}
	
	printf("Melhor tempo: %d \n",maior);
	printf("Volta do melhor tempo: %d \n",volta+1);
	printf("Tempo medio das voltas: %d\n",s/N);		
	
	system("pause");
	return 0;
}
