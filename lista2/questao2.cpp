#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3;

    printf("\nDigite a nota 1 do aluno: \n");
    scanf("%f", &n1);

    printf("\nDigite a nota 2 do aluno: \n");
    scanf("%f", &n2);

    printf("\nDigite a nota 3 do aluno: \n");
    scanf("%f", &n3);

    float media_aritmetica = (n1 + n2 + n3) / 3;

    printf("\nSituacao do aluno: ");
    if (media_aritmetica >= 0 && media_aritmetica < 3) {
        printf("Aluno reprovado.\n\n");
    } else if (media_aritmetica >= 3 && media_aritmetica < 6) {
        printf("Exame.\n\n");
    } else if (media_aritmetica >= 6 && media_aritmetica < 7) {
        printf("Aluno em recuperação.\n\n");
    } else if (media_aritmetica >= 7 && media_aritmetica <= 10) {
        printf("Aluno aprovado.\n\n");
    } else {
        printf("Notas inválidas.\n\n");
    }

    system("pause");
    return 0;
}