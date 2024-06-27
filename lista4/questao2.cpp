#include <stdio.h>
#include <stdlib.h>

int soma_valores(int num1, int num2){
	int soma = 0; 
	if(num1>num2){
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	printf("\nOs valores entre %d e %d sao: \n", num1, num2);
	
	for(int i = num1 + 1; i<num2; i++){
		soma = soma + i;
		printf("%d ", i);
	}
	return soma;
}

int main(){
	int num1, num2;

	printf("Insira um numero ");
	scanf("%d", &num1);
	printf("Insira outro numero ");
	scanf("%d", &num2);
	
	int result = soma_valores(num1, num2);
	
	printf("\nA soma dos numeros entre %d e %d eh: %d\n\n", num1, num2, result);

	system("pause");
	return 0;
}
