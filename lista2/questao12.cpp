#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, aumento, novo_salario;
    int codigo;

    printf("\nInsira seu salario: R$");
    scanf("%f", &salario);

    printf("\nInsira o numero que informa o seu cargo: ");
    printf("\nEscritorio (1)");
    printf("\nSecretario (2)");
    printf("\nCaixa (3)");
    printf("\nGerente (4)");
    printf("\nDiretor (5)");
    scanf("\n%d", &codigo);

    switch (codigo) {
        case 1: // Escritório
            novo_salario = salario * 1.50; // 50% de aumento
            aumento = novo_salario - salario;
            printf("\nSeu novo salario: R$ %.2f", novo_salario);
            printf("\nSeu salario obteve um aumento de: R$ %.2f", aumento);
            break;
        case 2: // Secretário
            novo_salario = salario * 1.35; // 35% de aumento
            aumento = novo_salario - salario;
            printf("\nSeu novo salario: R$ %.2f", novo_salario);
            printf("\nSeu salario obteve um aumento de: R$ %.2f", aumento);
            break;
        case 3: // Caixa
            novo_salario = salario * 1.20; // 20% de aumento
            aumento = novo_salario - salario;
            printf("\nSeu novo salario: R$ %.2f", novo_salario);
            printf("\nSeu salario obteve um aumento de: R$ %.2f", aumento);
            break;
        case 4: // Gerente
            novo_salario = salario * 1.10; // 10% de aumento
            aumento = novo_salario - salario;
            printf("\nSeu novo salario: R$ %.2f", novo_salario);
            printf("\nSeu salario obteve um aumento de: R$ %.2f", aumento);
            break;
        case 5: // Diretor
            printf("\nSeu salario continua sendo: R$ %.2f", salario);
            break;
        default:
            printf("\nCódigo de cargo inválido.");
    }

    system("pause");
    return 0;
}
