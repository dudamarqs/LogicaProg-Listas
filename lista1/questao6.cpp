#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba o salário-base de um funcionário, calcule e mostre o
// salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o
// salário-base e paga imposto de 7% sobre o salário-base.

int main(){
    float salbase, novosal, imp, grat;
    
    printf("Insira o salario-base do funcionario: \nR$ ");
    scanf("%f", &salbase);

    grat = salbase * 0.05;
    printf("\nValor da gratificacao: R$ %.2f \n(5%% do salario-base)", grat);

    imp = salbase * 0.07;
    printf("\n\nValor do imposto: R$ %.2f \n(7%% do salario-base)", imp);

    novosal = salbase + grat - imp;
    printf("\n\nNovo salario do funcionario: R$%.2f\n\n", novosal);

    system("pause");
    return 0;
}