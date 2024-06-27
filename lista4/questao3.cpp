#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sum_div_a(int a, int b, int c){
	int sum = 0;
	
	//verificar que b<c
	if(b > c){
		int temp = b;
		b = c;
		c = temp;
	}
	//loop para dividir os numeros entre b e c por a
	for(int i = b; i <= c; i++){
		if(i % a == 0){
			sum += i;
		}
	}
	return sum;
}

int main(){
	int num1, num2, num3;
	
	do{
	printf("\nInsira um valor para 'a': ");
	scanf("%d", &num1);
		if(num1 < 1){
		printf("\nO valor de 'a' deve ser maior que 1!\n");}	
	} while (num1 < 1);
	
		printf("\nInsira um valor para 'b': ");
		scanf("%d", &num2);
		printf("\nInsira um valor para 'c': ");
		scanf("%d", &num3);
		
		int result = sum_div_a(num1, num2, num3);
		printf("\nA soma dos valores entre '%d' e '%d' que sao divisiveis por '%d' eh: %d\n\n", num2, num3, num1, result);
	
	system("pause");
	return 0;
}
