#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float salmin, horatrab, dep, horaex;
    float valor_horatrab, salmes, vdep, valor_horaex, salb, irrf, salliq, grat, salf;

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salmin);
    
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horatrab);
    
    printf("Digite o numero de dependentes: ");
    scanf("%f", &dep);
    
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horaex);

    valor_horatrab = salmin / 5;
    salmes = horatrab * valor_horatrab;
    vdep = 32 * dep;
    valor_horaex = horaex * (valor_horatrab * 1.5);
    salb = salmes + vdep + valor_horaex;

    if (salb >= 200 && salb <= 500) {
        irrf = salb * 0.1;
    } else if (salb > 500) {
        irrf = salb * 0.2;
    } else {
        irrf = 0;
    }

    salliq = salb - irrf;

    if (salliq <= 350) {
        grat = 100;
    } else {
        grat = 50;
    }

    salf = salliq + grat;

    printf("O seu salario total eh: R$%.2f\n", salf);

    system("pause");
    return 0;
}
