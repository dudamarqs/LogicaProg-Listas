#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod_prod, c;
    float vf, preco, peso, pesokg, imp;

    printf("Digite o codigo do produto (1 - 10): ");
    scanf("%d", &cod_prod);

    printf("Digite o peso do produto em quilos: ");
    scanf("%f", &pesokg);

    printf("Digite o codigo do país de origem (1, 2 ou 3): ");
    scanf("%d", &c);

    // Converte o peso em kg para g.
    peso = pesokg * 1000;

    // Primeira faixa de códigos de produto
    if (cod_prod >= 1 && cod_prod <= 4) {
        preco = peso * 10;
        if (c == 1) {
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 0%% eh: R$0.00");
            printf("\nO preco total do produto com imposto eh: R$ %.2f\n\n", preco);
        } else if (c == 2) {
            imp = preco * 0.15;
            vf  = preco + imp;
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 15%% eh: R$ %.2f", imp);
            printf("\nO preco total do produto com imposto eh: R$ %.2f\n\n", vf);
        } else if (c == 3) {
            imp = preco * 0.25;
            vf = preco + imp;
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 25%% eh: R$ %.2f", imp);
            printf("\nO preco total do produto com imposto eh: R$ %.2f\n\n", vf);
        }
    }

    // Segunda faixa de códigos de produto
    if (cod_prod >= 5 && cod_prod <= 7) {
        preco = peso * 25;
        if (c == 1) {
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 0%% eh: R$ 0.00");
            printf("\nO preco total do produto com imposto eh: R$ %.2f\n\n", preco);
        } else if (c == 2) {
            imp = preco * 0.15;
            vf  = preco + imp;
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 15%% eh: R$ %.2f", imp);
            printf("\nO preco total do produto com imposto eh: R$ %.2f\n\n", vf);
        } else if (c == 3) {
            imp = preco * 0.25;
            vf = preco + imp;
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 25%% eh: R$ %.2f", imp);
            printf("\nO preco total do produto com imposto eh: R$ %.2f\n\n", vf);
        }
    }

    // Terceira faixa de códigos de produto
    if (cod_prod >= 8 && cod_prod <= 10) {
        preco = peso * 35;
        if (c == 1) {
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 0%% eh: R$ 0.00");
            printf("\nO preco total do produto com imposto eh: R$ %.2f", preco);
        } else if (c == 2) {
            imp = preco * 0.15;
            vf  = preco + imp;
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 15%% eh: R$ %.2f", imp);
            printf("\nO preco total do produto com imposto eh: R$ %.2f", vf);
        } else if (c == 3) {
            imp = preco * 0.25;
            vf = preco + imp;
            printf("\nO peso do produto convertido em gramas eh: %.2fg", peso);
            printf("\nO preco total do produto comprado eh: R$ %.2f", preco);
            printf("\nO valor do imposto de 25%% eh: R$ %.2f", imp);
            printf("\nO preco total do produto com imposto eh: R$ %.2f\n\n", vf);
        }
    }

    system("pause");
    return 0;
}


