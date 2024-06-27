#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 10

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sortDescending (int array[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(array[j] < array[j + 1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
}

int main(){
	int array[10];
	int size = 10;
	int num;

	printf("\nInsira 10 valores inteiros:\n");
	for(int i = 0; i < SIZE; i++){
	printf("%d/10: ", i+1);
	scanf("%d", &array[i]);
	}
	
	sortDescending(array, size);

	printf("\nVetor ordenado em ordem decrescente:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

	system("pause");
	return 0;
}

