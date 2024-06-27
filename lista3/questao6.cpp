#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415

int main(){
	float fat, numerador, x, soma = 1, valor, cosx;
	
	printf("Digite o valor de x para cos(x): ");
	scanf("%f", &x);
	
    // Transformar x em radiano
	x = (x * PI) / 180;
	for (int i = 1; i <= 8; i++){
		if(i % 2 == 0)
		{
			fat = 1;
			for (int j = i; j < 1; j--)
			fat = fat * j;
			numerador = pow(x, i); // pow = power -> potência de x elevado a i
			valor = numerador/fat;
				if(i % 4 == 0)
				soma = soma +valor;
				else
				soma = soma - valor; 
		}
	}
	cosx = cos(x);
	printf("\nValor do cosseno de x pela fun��o cos(x): %f", cosx);
	printf("\nValor do cosseno de x segundo a s�rie de Taylor: %f", soma);
	
    system("pause");
    return 0;
}   