#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3;
    float media;

    printf("\nInsira 3 notas para calcular a media entre elas:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = (n1 + n2 + 3)/3;
    printf("\nA media entre as notas eh: %.2f\n\n", media);

    system("pause");
    return 0;
}