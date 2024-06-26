#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
// calcule e mostre o valor do rendimento e o valor total depois do rendimento.

int main(){
    float deposito, taxaJuros, rendimento, total;

    printf("\nDigite o valor do deposito: R$ ");
    scanf("%f", &deposito);

    printf("\nDigite a taxa de juros (em %%): ");
    scanf("%f", &taxaJuros);

    rendimento = deposito * (taxaJuros/100);
    total = deposito + rendimento;
    printf("\n-------------------------------------------");
    printf("\nRendimento: R$ %.2f", rendimento);
    printf("\nValor apos rendimento: %.2f", total);

    system("pause");
    return 0;
}