#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, p1, p2, p3, mediap;

    // Solicita ao usuário o valor dos pesos.
    printf("\nInsira os valores de cada peso: \n");
    printf("\nPeso 1: ");
    scanf("%f", &p1);
    printf("\nPeso 2: ");
    scanf("%f", &p2);
    printf("\nPeso 3: ");
    scanf("%f", &p3);

    // Solicita ao usuário o valor de cada nota.
    printf("\n\nInsira os valores de cada nota: \n");
    printf("\nNota 1: ");
    scanf("%f", &n1);
    printf("\nNota 2: ");
    scanf("%f", &n2);
    printf("\nNota 3: ");
    scanf("%f", &n3);

    // Calcula a MP e mostra o resultado na tela.
    mediap = ((n1 * p1) + (n2 * p2) + (n3 * p3))/(p1 + p2 + p3);
    printf("\nMedia Ponderada: %.2f\n\n", mediap);

    system("pause");
    return 0;
}