#include <stdio.h>
#include <stdlib.h>

int main(){
    float horas_trabalhadas;
    float salario_min;

    printf("\nDigite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_min);

    float valor_hora = salario_min / 2.0;
    float salario_bruto = horas_trabalhadas * valor_hora;
    float imposto = salario_bruto * 0.03;
    float salario_receber = salario_bruto - imposto;

    printf("\nSalario a receber: R$ %.2f\n\n", salario_receber);

    system("pause");
    return 0;
}