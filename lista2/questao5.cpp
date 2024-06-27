#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2, num3, num4;
    float temp;

    printf("Digite o primeiro valor (em ordem crescente): \n");
    scanf("%f", &num1);

    printf("Digite o segundo valor (em ordem crescente): \n");
    scanf("%f", &num2);

    printf("Digite o terceiro valor (em ordem crescente): \n");
    scanf("%f", &num3);

    printf("Digite o quarto valor (em qualquer ordem): \n");
    scanf("%f", &num4);

    float nums[4] = {num1, num2, num3, num4};

    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (nums[i] < nums[j]){
                float temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // Exibe os números em ordem descrescente.
    printf("\Valores em ordem decrescente: \n%.2f  %.2f  %.2f  %.2f\n\n", nums[0], nums[1], nums[2], nums[3]);

    system("pause");
    return 0;
}