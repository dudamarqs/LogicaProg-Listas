#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba o salário de um funcionário e o percentual de
// aumento, calcule e mostre o valor do aumento e o novo salário.

int main(){
    float salario, percentual, aumento;

    printf("\nInsira o valor do salario do funcionario: \nR$ ");
    scanf("%f", &salario);
    printf("\nInsira o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = (percentual/100) * salario;
    salario += aumento;
    printf("\nNovo salario: %.2f\n\n", salario);

    system("pause");
    return 0;
}