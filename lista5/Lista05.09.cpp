#include <stdio.h>
#include <stdlib.h>

void ordemCrescente(int *vetor, int tamanho) 
{
	int i, j, temp;
	for (i = 0; i < tamanho; i++) 
	{
		for (j = i + 1; j < tamanho; j++) 
		{
			if (vetor[i] > vetor[j]) {
				temp = vetor[i];
		    	vetor[i] = vetor[j];
		    	vetor[j] = temp;
			}
		}
	}
}

void fill_array(int *vetor, int size){
	printf("\n\nInsira %d valores\n", size);
	for(int i = 0; i < size; i++){
		printf("%d/%d - ", i + 1, size);
		scanf("%d", &vetor[i]);
	}
}

void mergeArrays(int vetorResultante[], int primeiroVetor[], int segundoVetor[], int size) {
    for (int i = 0; i < size; i++)
    {
        vetorResultante[i] = primeiroVetor[i];
        vetorResultante[i + 5] = segundoVetor[i];
    }

    ordemCrescente(vetorResultante, 10);
}

void merge_arrays(const int array1[], int array2[], int merged_array[], int size){
	int i = 0, j = 0, k = 0;
	while(i < size && j < size){
		if(array1[i] < array2[j]){
			merged_array[k++] = array1[i++];
		} else {
			merged_array[k++] = array2[j++];
		}
	}
	while(i < size){
		merged_array[k++] = array1[i++];
	}
	while(j < size){
		merged_array[k++] = array2[j++];
	}
}

int main(){
	int size = 5;
    int primeiroVetor[5], segundoVetor[5], terceiroVetor[10];

	//Chama a função que preenche os vetores
	fill_array(primeiroVetor, 5);
	fill_array(segundoVetor, 5);

	//Chama a função que ordena os vetores
	ordemCrescente(primeiroVetor, size);
	ordemCrescente(segundoVetor, size);

	//Chama a função que intercala os vetores
	//merge_arrays (primeiroVetor, segundoVetor, terceiroVetor, size * 2);

	//Mostra resultados na tela
	printf("\nVetor 1 ordenado:\n");
	for(int i = 0; i < size; i++){
		printf("%d ", primeiroVetor[i]);
	}
	printf("\nVetor 2 ordenado:\n");
	for(int i = 0; i < size; i++){
		printf("%d ", segundoVetor[i]);
	}
    
    mergeArrays(terceiroVetor, primeiroVetor, segundoVetor, 5);

	printf("\nVetor intercalado:\n");
	for(int i = 0; i < size * 2; i++){
		printf("%d ", terceiroVetor[i]);
	}

    system("pause");
	return 0;
}
