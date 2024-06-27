#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura, peso;
    
    printf("Insira a sua altura em centímetros: ");
    scanf("%f", &altura);
    
    printf("Insira o seu peso em quilos: ");
    scanf("%f", &peso);
    
    if (altura < 120) {
        if (peso <= 60) {
            printf("\nClassificacao: A\n");
        } else if (peso > 60 && peso <= 90) {
            printf("\nClassificacao: D\n");
        } else {
            printf("\nClassificacao: G\n");
        }
    } else if (altura >= 120 && altura <= 170) {
        if (peso <= 60) {
            printf("\nClassificacao: B\n");
        } else if (peso > 60 && peso <= 90) {
            printf("\nClassificacao: E\n");
        } else {
            printf("\nClassificacao: H\n");
        }
    } else {
        if (peso <= 60) {
            printf("\nClassificacao: C\n");
        } else if (peso > 60 && peso <= 90) {
            printf("\nClassificacao: F\n");
        } else {
            printf("\nClassificacao: I\n");
        }
    }

    system("pause");
    return 0;
}
