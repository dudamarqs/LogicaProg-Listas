#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano_nasc, ano_atual, idade, idade2050;
    
    printf("\nDigite seu ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nasc;
    printf("\nIdade atual: %d", idade);

    idade2050 = (2050 - ano_atual) + idade;
    printf("\nIdade em 2050: %d\n\n", idade2050);

    return 0;
}