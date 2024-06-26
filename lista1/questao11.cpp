#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num;
    float r1, r2, raizq, raizc;

    printf("\nDigite um numero positivo: ");
    scanf("%d", &num);

    // Calcula o numero elevado ao quadrado
    r1 = num * num;
    printf("\n%d elevado ao quadrado: %.1f", num, r1);

    // Calcula o numero digitado elevado ao cubo.
    r2 = num * num * num;
    printf("\n%d elevado ao cubo: %.1f", num, r2);

    // Calcula a raiz quadrada do numero digitado.
    raizq = sqrt(num);
    printf("\nRaiz quadrada de %d: %.1f", num, raizq);

    // Calcula a raiz cubica do numero digitado;
    raizc = cbrt(num);
    printf("\nRaiz cubica de %d: %.1f", num, raizc);

    system("pause");
    return 0;
}