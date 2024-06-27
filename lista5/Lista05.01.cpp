#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void inserir(int vetor[]){
	int i; 
	for (i=0; i<9; i++){ //recebe os valores
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
		printf("\nO numero %d eh primo e ocupa a posicao %d no vetor\n\n", vetor[i], i);
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
