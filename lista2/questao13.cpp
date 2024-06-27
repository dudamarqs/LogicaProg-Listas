#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float imposto, salario, novo_sal;

    printf("\nDigite a opção desejada: \n");
    printf("(1) Imposto\n");
    printf("(2) Novo Salario.\n");
    printf("(3) Classificacao.\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: // imposto
            printf("\nSalario: R$");
            scanf("%f", &salario);

            if (salario < 500) {
                imposto = salario * 5 / 100;
                printf("\nImposto = R$ %.2f", imposto);
            } else if (salario >= 500 && salario < 850) {
                imposto = salario * 10 / 100;
                printf("\nImposto = R$ %.2f", imposto);
            } else if (salario >= 850) {
                imposto = salario * 15 / 100;
                printf("\nImposto = R$ %.2f", imposto);
            }
            break;

        case 2: // novo salario
            printf("\nSalario: R$");
            scanf("%f", &salario);

            if (salario > 1500) {
                novo_sal = salario + 2;
                printf("\nNovo Salario: R$ %.2f", novo_sal);
            } else if (salario >= 750 && salario <= 1500) {
                novo_sal = salario + 50;
                printf("\nNovo Salario: R$ %.2f", novo_sal);
            } else if (salario >= 450 && salario < 750) {
                novo_sal = salario + 75;
                printf("\nNovo Salario: R$ %.2f", novo_sal);
            } else if (salario < 400) {
                novo_sal = salario + 100;
                printf("\nNovo Salario: R$ %.2f", novo_sal);
            }
            break;

        case 3: // classificação
            printf("\nSalario: R$");
            scanf("%f", &salario);

            if (salario <= 700) {
                printf("\nMal remunerado.");
            } else if (salario > 700) {
                printf("\nBem remunerado.");
            }
            break;
        
        default:
            printf("\nOpção invalida.");
            break;
    }

    system("pause");
    return 0;
}
