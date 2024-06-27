#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;

    printf("\nDigite um numero: \n");
    scanf("%d", &number);

    if (number % 2 == 0){
        printf("\nO numero digitado eh par!\n\n");
    } else {
        printf("\nO numero digitado eh impar!\n\n");
    }

    system("pause");
    return 0;
}