#include <stdio.h>
#include <stdlib.h>

void geraVet(int v[], int n){
	int i;
	srand(time(NULL));// inicializa gerador de numeros
	for(i=0;i<n;i++)
		v[i] = rand()%10;
}
//---------------------------------
void mostraVet(int v[], int n){
	int i;
	for(i=0;i<n;i++)
	   printf("%d |", v[i]);
	printf("\n");   
}
//---------------------------------
void leiaVet(int v[], int n){
	int i;
	for(i=0;i<n;i++){
	   printf("v[%d]:",i);
	   scanf("%d",&v[i]);
	}// fim for
	printf("\n");   
}
//-------------------------------
