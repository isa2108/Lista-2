#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	char gab[10],resp[10];
	int i,na,j,acertos[100];
	
	
	printf("GABARITO DA PROVA\n");
	for(i=0; i<10; i++){
		printf("Questao %d: ",i+1);
		setbuf(stdin, NULL);
		scanf("%s",&gab[i]);		
	}
	printf("\nInforme o numero de alunos: ");
	scanf("%d",&na);
	printf("\n");
		
	for(i=0; i<na; i++){
		printf("ALUNO %d\n",i+1);
		printf("Informe as respostas: \n");
		acertos[i]=0;
		
		for(j=0; j<10; j++){
			printf("Questao %d: ",j+1);
		setbuf(stdin, NULL);
		scanf("%s",&resp[j]);
		
		if(resp[j] == gab[j]){
			
			acertos[i]++;
				}
		}	printf("\n");
					}
		
		for(i=0; i<na; i++){
			printf("Acertos do aluno %d: %d \n",i+1,acertos[i]);
		}
	
	
	system("pause");
	return 0;
}
