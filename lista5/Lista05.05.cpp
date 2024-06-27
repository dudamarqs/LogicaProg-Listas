#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int vetor1[10], vetor2[10], vResultado[20];
	int i, j, k;
	
	printf("\nInsira os valores do primeiro vetor:\n");
	for(i=0; i<10; i++){
		printf("%d/10 - ", i+1);
		scanf("%d", &vetor1[i]);
	}
	printf("\nInsira os valores do segundo vetor:\n");
	for(i=0; i<10; i++){
		printf("%d/10 - ", i+1);
		scanf("%d", &vetor2[i]);
	}
	system ("cls");

		i=0; j=0; k=0;
	while(i < 10 && j < 10){
		vResultado[k++] = vetor1[i++];
		vResultado[k++] = vetor2[j++];
	}
	while(i < 10){
		vResultado[k++] = vetor1[i++];
	}
	while(j < 10){
		vResultado[k++] = vetor2[j++];
	}
	printf("\nTerceiro vetor (valores intercalados):\n");
	for(i=0; i<20; i++){
		printf("%d ", vResultado[i]);
	}

	system("pause");
	return 0;
}
