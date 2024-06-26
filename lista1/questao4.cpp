#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo 
// salário, sabendo-se que este sofreu um aumento de 25%.

int main(){
    float salario, aumento;
    printf("Insira o valor do salario do funcionario:\nR$ ");
    scanf("%f", &salario);

    aumento = 0.25 * salario;
    salario += aumento;
    printf("Novo salario: R$ %.2f\n\n", salario);

    system("pause");
    return 0;
}