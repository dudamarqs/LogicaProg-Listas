#include <stdio.h>
#include <stdlib.h>

float factorial(int num){
	return (num == 0) ? 1 : (num * factorial(num - 1));
}

void calcfact(int input[], int output[]){
	int i;
	for(i=0; i<10; i++) output[i] = factorial(input[i]);
}

void compare_ar(int ar1[], int ar2[]){
	printf("\nComparando dois vetores: ");
	int i;
	for(i=0; i<10; i++){
	printf("\n%i valor = resultado do vetor 1: %i | resultado do vetor 2: %i", (i+1), ar1[i], ar2[i]);
		}
}

int main(){
	int input[10], output[10], i;
	for(i=0; i<10; i++){
		int num;
		printf("\nInsira um valor para o vetor %i: ", (i+1));
		scanf("%d", &num);
			if(num <= 0){
				printf("\nErro! Digite um valor valido.");
				i--;
			} else input [i] = num;
	}
	calcfact(input, output);
	compare_ar(input, output);
	
	system("pause");
	return 0;
}
