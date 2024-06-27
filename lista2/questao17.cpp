#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;

    printf("\nDigite um valor pra 'a': ");
    scanf("%f", &a);

    printf("\nDigite um valor pra 'b': ");
    scanf("%f", &b);

    printf("\nDigite um valor pra 'c': ");
    scanf("%f", &c);

    // Cálculo do discriminante
    d = b * b - 4 * a * c; 

    // Verificação das condições para as raízes
    if (a == 0) {
        printf("\nO valor de 'a' deve ser diferente de 0.\n\n");
    } else {
        if (d < 0) {
            printf("\nNao existe raiz real.\n\n");
        } else if (d == 0) { 
            printf("\nExiste uma raiz real:\n");
            x1 = -b / (2 * a);
            printf("A raiz eh: %.2f\n\n", x1);
        } else {
            printf("\nExistem duas raizes reais:");
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("\n- A raiz de x1 eh: %.2f\n- A raiz de x2 eh: %.2f\n\n", x1, x2);
        }
    }

    system("pause");
    return 0;
}
