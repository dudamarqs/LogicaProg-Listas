#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("\nInsira o primeiro valor: \n");
    scanf("%d", &num1);

    printf("\nInsira o segundo valor: \n");
    scanf("%d", &num2);

    system("cls");
    if (num1 > num2) {
        printf("\nMaior valor: %d\n\n", num1);
    } else {
        printf("\nMaior valor: %d\n\n", num2);
    }

    system("pause");
    return 0;
}