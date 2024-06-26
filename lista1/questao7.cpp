#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba o salário-base de um funcionário, calcule e
// mostre seu salário a receber, sabendo-se que esse funcionário tem gratificação de R$
// 50,00 e paga imposto de 10% sobre o salário-base.

int main(){
    float salbase, grat = 50.00, imp, novoSal;

    printf("\nInsira o valor do salario-base do funcionario: \nR$ ");
    scanf("%f", &salbase);

    imp = 0.10 * salbase;
    novoSal = salbase + grat - imp;
    printf("\n--------------------------------------------------------");
    printf("\n\nNovo salario do funcionario: R$ %.2f \n(Gratificacao de R$ 50,00 + Imposto de 10%% sobre o salario-base)\n\n", novoSal);

    system("pause");
    return 0;
}