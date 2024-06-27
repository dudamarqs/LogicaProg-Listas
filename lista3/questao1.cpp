#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float salario, aumento;
	int ano, ano_at;

	//ano_at = ano atual
	printf("Informe o ano atual: ");
	scanf("%d", &ano_at);

	// Cálculos e valores das variáveis
	ano = 2005;
	salario = 1000;
	aumento = 1.5/100;

	printf("\nValor do salario do ano %d: R$ %.2f", ano, salario);
	
	// Laço de repetição
	for(ano = 2006; ano <= ano_at; ano++){
		salario += (salario * aumento);
		aumento = 2 * aumento;
		printf("\nValor do salario do ano %d: R$ %.2f\n\n", ano, salario);
	}
	
}