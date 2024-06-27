#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main(){
	int array[SIZE], i, j;
	
	printf("\nInsira 8 valores:\n");
	for(i = 0; i < 8; i++){ //inserir valores
		printf("%d/8 - ", i+1);
		scanf("%d", &array[i]);
	}
	//ordenando o vetor
	for(i = 1; i < SIZE; i++){
	int temp = array[i];
	j = i;
	while (j > 0 && array[j - 1] > temp){
		array[j] = array[j - 1];
		j--;
		} 
	array[j] = temp;
	}
	
	printf("\nVetor em ordem crescente:\n");
	for(i = 0; i <= SIZE; i++){
		printf("%d ", array[i - 1]);
	}

	system("pause");
	return 0;
}

