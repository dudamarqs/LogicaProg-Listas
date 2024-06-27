#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int opcao, num1, num2, soma;
	float raiz;

	printf("\nEscolha uma das opcoes:\n");
	printf("(1) Somar dois numeros.\n");
	printf("(2) Calcular a raiz de um numero.\n");
	scanf("%d", &opcao);
	
switch(opcao){
	case 1: //(1) somar dois numeros
		printf("\nDigite um numero: \n");
		scanf("%d", &num1);
		printf("\nDigite um numero: \n");
		scanf("%d", &num2); 
		soma = num1 + num2;
		printf("\nSOMA: %d ", soma);
	break;

	case 2: //(2) raiz de um numero
		printf("\nDigite um numero: \n");
		scanf("%d", &num1);
		raiz = sqrt(num1);
		printf("\nRAIZ QUADRADA de %d: %.2f", num1, raiz);
	break;

    default:
        printf("\nVoce escolheu uma opcao invalida.");
	}	
}