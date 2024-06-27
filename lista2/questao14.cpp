#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, novo_sal;
    
    printf("\nDigite o salario: R$ ");
    scanf("%f", &salario);

    // Com bonificação e auxílio escola
    if (salario <= 500) {
        novo_sal = salario + (salario * 0.05) + 150;
        printf("\nSeu novo salario + bonificação e auxilio escola eh: R$ %.2f\n\n", novo_sal);
    } else if (salario > 500 && salario <= 600) {
        novo_sal = salario + (salario * 0.12) + 150;
        printf("\nSeu novo salario + bonificação e auxilio escola eh: R$ %.2f\n\n", novo_sal);
    } else if (salario > 600 && salario < 1200) {
        novo_sal = salario + (salario * 0.12) + 100;
        printf("\nSeu novo salario + bonificação e auxilio escola eh: R$ %.2f\n\n", novo_sal);
    } else if (salario >= 1200) {
        novo_sal = salario + 100;
        printf("\nSeu novo salario + auxilio escola eh: R$ %.2f\n\n", novo_sal);
    }

    system("pause");
    return 0;
}

