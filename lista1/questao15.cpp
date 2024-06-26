#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco_fabrica, perc_lucro, perc_imposto;

    printf("\nDigite o preco de fabrica do veiculo: \nR$ ");
    scanf("%f", &preco_fabrica);

    printf("\nDigite o percentual de lucro do distribuidor (em %%): \n");
    scanf("%f", &perc_lucro);

    printf("\nDigite o percentual de impostos (em %%): \n");
    scanf("%f", &perc_imposto);

    // Calcula o lucro do consumidor:
    float valor_lucro = preco_fabrica * (perc_lucro/100);

    // Calcula o imposto.
    float valor_imposto = preco_fabrica * (perc_imposto/100);

    // Calcula o valor final do veiculo.
    float valor_final = preco_fabrica + valor_imposto + valor_lucro; 

    system("cls");
    printf("Valor corespondente ao lucro do consumidor: R$ %.2f", valor_lucro);
    printf("\nValor corespondente aos impostos: R$ %.2f", valor_imposto);
    printf("\nPreco final do produto: R$ %.2f\n\n", valor_final);

    system("pause");
    return 0;
}