#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float aumento_porc(float valor_an, float valor_at){
	float aumento;
	aumento = ((valor_at - valor_an)/valor_an)*100;
	
	return aumento;
}

int main(){
	float valor_antigo, valor_atual;
	printf("\nDigite o antigo valor do produto: R$ ");
	scanf("%f", &valor_antigo);
	printf("\nDigite o valor atual do produto: R$ ");
	scanf("%f", &valor_atual);
	
	float result = aumento_porc(valor_antigo, valor_atual);
	printf("\nO produto teve um aumento de %.2f\n\n", result);
	
	system("pause");
	return 0;
}
