#include <stdio.h>
#include <stdlib.h>

void receber(int vetor1[], int vetor2[]){
	int i;
	for(i=0; i<=4; i++){
		printf("Insira o %do valor do vetor 1: ", i+1);
		scanf("%d", &vetor1[i]);
	} 
			printf("\n\n");
			
	for(i=0; i<=4; i++){
		printf("Insira o %do valor do vetor 2: ", i+1);
		scanf("%d", &vetor2[i]);
	}
}

void troca(int vetor[]){
	int i, aux; 
	int vetor1[5];
	int vetor2[5];
	for(i=0; i<5; i++){
		aux = vetor1[i];
		vetor1[i] = vetor2[i];
		vetor2[i] = aux;
	}
}

int main (){
	int vetor1[5];
	int vetor2[5];
	int i;
	
	receber(vetor1, vetor2);
	
	printf("\nLista 1 antes da troca: ");
	for(i=0; i<5; i++){
		printf("%d ", vetor1[i]);
	}
	printf("\nLista 2 antes da troca: ");
	for(i=0; i<5; i++){
		printf("%d ", vetor2[i]);
	}
	troca(vetor1);
	
	printf("\n\nLista 1 apos a troca: ");
	for(i=0; i<5; i++){
		printf("%d ", vetor2[i]);
	}
	printf("\nLista 2 apos a troca: ");
	for(i=0; i<5; i++){
		printf("%d ", vetor1[i]);
	}
	
	system("pause");
	return 0;
}
