#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa que receba dois números maiores que zero, 
// calcule e mostre um elevado ao outro.

int main(){
    int num1, num2, result;

    printf("Digite um valor para N1: ");
    scanf("%d", &num1);

    printf("Digite um valor para N2: ");
    scanf("%d", &num2);

    result = pow(num1, num2);
    printf("\n%d elevado a %d = %d", num1, num2, result);

    system("pause");
    return 0;
}
