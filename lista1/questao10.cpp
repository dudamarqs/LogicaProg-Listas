#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa que calcule e mostre a área de um círculo.

int main(){
    float area, raio, pi = 3.14;

    printf("\nCalculando a area de um circulo:\n");
    printf("\nDigite o raio: ");
    scanf("%f", &raio);

    area = pi * powf(raio, 2);
    printf("\nArea do circulo: %.2f", area);

    system("pause");
    return 0;
}