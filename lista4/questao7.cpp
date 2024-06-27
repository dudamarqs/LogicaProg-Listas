#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float calculo(int num){
	float fact, soma = 1;
	int  i, j;
		for(i=2; i<=num; i++){
			fact = 1;
			for(j=i; j>1; j--){
				fact = fact*j;
			} soma = soma + 1/fact;
		} 
	return soma;
}

int main(){
	int num;
	
	do{
	system("cls");
	printf("\nInsira um valor: ");
	scanf("%d", &num);
		if(num<1){
			printf("\nDigite um valor maior que 0!");
			_sleep (1500);
		}
	} while (num < 1);
	printf("\nResultado da soma: %.2f", calculo(num));

	system("pause");
	return 0;
}
