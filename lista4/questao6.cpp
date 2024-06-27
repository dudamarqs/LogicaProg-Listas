#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float average_a(float n1, float n2, float n3){
	float average;
	average = (n1+n2+n3)/3;
}

float average_p(float n1, float n2, float n3){
	int p1 = 5, p2 = 3, p3 = 2;
	float average;
	average = ((n1*p1)+(n2*p2)+(n3+p3))/n1+n2+n3;
}

int main(){
	float n1, n2, n3;
	int letra;
	
	printf("\nInsira o valor da nota 1: ");
	scanf("%f", &n1);
	printf("\nInsira o valor da nota 2: ");
	scanf("%f", &n2);
	printf("\nInsira o valor da nota 3: ");
	scanf("%f", &n3);
	
	printf("\nEscolha 'A' (calcular a media aritmetica entre as notas) ou 'P' (calcular a media ponderada): ");
	scanf("%d", letra);
	
	if(letra = 'A'){
		printf("\nA media aritmetica das notas eh: %.2f", average_a(n1, n2, n3));
	} else if (letra = 'P'){
		printf("\nA media ponderada das notas eh: %f", average_p(n1, n2, n3));
	}

	system("pause");
	return 0;
}
