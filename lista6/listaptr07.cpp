#include <stdio.h>
#include <stdlib.h>

void encontrarValores(int *array, int size, int *maior, int *menor){
	*maior = *menor = array[0];
	for(int i = 0; i < size; i++){
		if(array[i] > *maior)
			*maior = array[i];
		else if (array[i] < *menor)
			*menor = array[i];
	}
}

int main(void){
	int size, maior, menor;
	printf("Insira a quantidade de elementos do vetor:\n");
	scanf("%d", &size);
	
	int *array = (int *)malloc(size * sizeof(int));
	
	if(array == NULL){
		printf("Erro ao alocar memoria.");
		return 1;
	}
	
	printf("\nElementos do vetor:\n");
	for(int i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}
	encontrarValores(array, size, &maior, &menor);
	printf("\n");
	printf("Maior elemento do vetor: %d\n", maior);
	printf("Menor elemento do vetor: %d", menor);
	free(array);

	return 0;
}
