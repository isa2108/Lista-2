#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	float n[5],maior=0,menor,s;
	int i;
	
	for(i=0; i<5; i++){
		scanf("%f",&n[i]);
		s=s+n[i];
	}
	menor=n[0]	
	for(i=0; i<5; i++){
		if(n[i]>maior){
			maior = n[i];
		} else if(n[i]<menor){
			menor=n[i];
		}
	}
	printf("%.1f\n",s-maior-menor);

	system("pause");
	return 0;
}
