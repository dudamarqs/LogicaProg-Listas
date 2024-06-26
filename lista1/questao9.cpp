#include <stdio.h>
#include <stdlib.h>

//Faça um programa que calcule e mostre a área de um triângulo.
// Sabe-se que: Área = (base * altura)/2.

int main(){
    float area, base, altura;

    printf("\nBase = ");
    scanf("%f", &base);
    printf("Altura = ");
    scanf("%f", &altura);

    area = (base * altura)/2;
    printf("\nArea do triangulo: %.2f\n\n", area);

    system("pause");
    return 0;
}