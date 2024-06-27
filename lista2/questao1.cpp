#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3;

    printf("\nDigite a nota do trabalho de laboratorio: \n");
    scanf("%f", &n1);
    printf("\nDigite a nota da avaliacao semestral: \n");
    scanf("%f", &n2);
    printf("\nDigite a nota do exame final: \n");
    scanf("%f", &n3);

    // Verificar se as notas estão dentro do intervalo válido
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10) {
        printf("Notas inválidas! Por favor, insira notas entre 0 e 10.\n");
        return 1;
    }

    // Cálculo da média ponderada do aluno:
    float media_ponderada = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);

    // Conceitos do aluno.
    if (media_ponderada >= 8 && media_ponderada <= 10) {
        printf("Conceito do aluno = A\n\n");
    } else if (media_ponderada >= 7 && media_ponderada < 8) {
        printf("Conceito do aluno = B\n\n");
    } else if (media_ponderada >= 6 && media_ponderada < 7) {
        printf("Conceito do aluno = C\n\n");
    } else if (media_ponderada >= 5 && media_ponderada < 6) {
        printf("Conceito do aluno = D\n\n");
    } else if (media_ponderada >= 0 && media_ponderada < 4) {
        printf("Conceito do aluno = E\n\n");
    }

    system("pause");
    return 0;
}