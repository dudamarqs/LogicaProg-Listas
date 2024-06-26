#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso_saco_kg, peso_saco_g, quantidade_racao_gato1, quantidade_racao_gato2, total_racao_dia, total_racao_5_dias, restante_racao;

    printf("Digite o peso do saco de racao (em kg): ");
    scanf("%f", &peso_saco_kg);

    // Conversão do peso do saco de ração de quilos para gramas.
    peso_saco_g = peso_saco_kg * 1000;

    printf("Digite a quantidade de racao fornecida para o gato 1 (em g): ");
    scanf("%f", &quantidade_racao_gato1);

    printf("Digite a quantidade de racao fornecida para o gato 2 (em g): ");
    scanf("%f", &quantidade_racao_gato2);

    // Total de ração fornecida por dia.
    total_racao_dia = quantidade_racao_gato1 + quantidade_racao_gato2;

    // Total de ração fornecida em cinco dias
    total_racao_5_dias = total_racao_dia * 5;

    // Quantidade de ração restante no saco após cinco dias
    restante_racao = peso_saco_g - total_racao_5_dias;

    printf("\nRestara %.2fg de racao no saco apos cinco dias.\n", restante_racao);

    return 0;
}