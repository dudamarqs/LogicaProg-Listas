#include <stdio.h>
#include <stdlib.h>

int main(){    
    float lado1, lado2, lado3;    

    printf("Digite os tamanhos dos lados do triangulo:\n(separe os valeres apertando na barra de espaco) \n");
    scanf("%f %f %f" , &lado1, &lado2, &lado3);    

    if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2)) {
        if (lado1 == lado2 && lado1 == lado3) {
            printf("\nÉ um triangulo equilátero.\n\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("\nEh um triangulo isósceles.\n\n");
        } else {
            printf("\nEh um triangulo escaleno.\n\n");
        }
    } else {
        printf("\nNao eh um triangulo.\n\n");
    }

    system("pause");
    return 0;
}
