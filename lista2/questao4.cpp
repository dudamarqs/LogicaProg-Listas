#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2, num3;

    printf("Digite o primeiro valor: \n");
    scanf("%f", &num1);

    printf("Digite o segundo valor: \n");
    scanf("%f", &num2);

    printf("Digite o terceiro valor: \n");
    scanf("%f", &num3);

    if (num1 > num2) {
        float temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3){
        float temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3){
        float temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("\nValores em ordem crescente: \n%.2f  %.2f  %.2f\n\n", num1, num2, num3);

    system("pause");
    return 0;
}