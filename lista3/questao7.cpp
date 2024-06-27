#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double n, k = 1.0, raiz;

    printf("Digite um numero: ");
    scanf("%lf", &n);
    
    for(int i = 0; i < 10; i++){
        k = (k + n/k)/2;
        printf("Iteracao n°%d: %.3lf\n", i + 1, k);
    }
    raiz = sqrt(n);
    printf("\nRaiz quadrada real: %.3lf\n\n", raiz);

    system("pause");
    return 0;
}