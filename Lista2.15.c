#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int X[10],i;
	leiaVet(X,10);
	for(i=0; i<10; i++){
		if(X[i] <=0){
			X[i]=1;
		}
	}
	
	for(i=0; i<10; i++){
		printf("X[%d] = %d\n",i,X[i]);
	}

	system("pause");
	return 0;
}
