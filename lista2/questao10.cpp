#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano1, ano2, mes1, mes2, dia1, dia2;

    printf("\nInsira duas datas e veja qual é maior cronologicamente:\n");

    // Primeira data
    printf("\nDia da primeira data: ");
    scanf("%d", &dia1);

    printf("Mes da primeira data: ");
    scanf("%d", &mes1);

    printf("Ano da primeira data: ");
    scanf("%d", &ano1);

    // Segunda data
    printf("\nDia da segunda data: ");
    scanf("%d", &dia2);

    printf("Mes da segunda data: ");
    scanf("%d", &mes2);

    printf("Ano da segunda data: ");
    scanf("%d", &ano2);

    // Condições para determinar a data mais recente
    printf("\nData mais recente: ");
    if (ano1 > ano2) {
        printf("%d/%d/%d\n", dia1, mes1, ano1);
    } else if (ano2 > ano1) {
        printf("%d/%d/%d\n", dia2, mes2, ano2);
    } else if (mes1 > mes2) {
        printf("%d/%d/%d\n", dia1, mes1, ano1);
    } else if (mes2 > mes1) {
        printf("%d/%d/%d\n", dia2, mes2, ano2);
    } else if (dia1 > dia2) {
        printf("%d/%d/%d\n", dia1, mes1, ano1);
    } else if (dia2 > dia1) {
        printf("%d/%d/%d\n", dia2, mes2, ano2);
    }

    system("pause");
    return 0;
}
