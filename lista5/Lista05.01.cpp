#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

// Faça um programa que preencha um vetor com nove numeros inteiros, 
// calcule e mostre os numeros primos e suas respectivas posições

void inserir(int vetor[]){
	int i; 
	for (i = 0; i < 9; i++){ //recebe os valores
		printf("Insira o %d elemento do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
}

void primos(int vetor[]){
	int i, j, cont;
	for(i=0; i<=9; i++){
		cont = 0;
		for(j=1; j<=vetor[i]; j++)
		{
			if((vetor[i]%j) == 0)
			cont++;
		}
		if(cont == 2)
		printf("\nO numero %d eh primo e ocupa a posi��o %d� no vetor", vetor[i], i);
	}
}

int main(){
	int num[9];
	inserir(num);
	primos(num);
	getch();

	system("pause");
	return 0;
}
