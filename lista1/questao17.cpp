#include <stdio.h>
#include <stdlib.h>

int main (){
    float salario, valor_cheque1, valor_cheque2;
    float saldo;
    float cpmf = 0.038/100;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o valor do cheque 1: R$ ");
    scanf("%f", &valor_cheque1);

    printf("Digite o valor do cheque 2: R$ ");
    scanf("%f", &valor_cheque2);
    
    // Saldo inicial é igual ao salário depositado
    saldo = salario;

    // Deduzir o valor do primeiro cheque e a taxa de CPMF
    saldo -= valor_cheque1;
    saldo -= valor_cheque1 * cpmf;

    // Deduzir o valor do segundo cheque e a taxa de CPMF
    saldo -= valor_cheque2;
    saldo -= valor_cheque2 * cpmf;

    printf("Saldo atual da conta R$ %.2f\n\n", saldo);

    system("pause");
    return 0;
}