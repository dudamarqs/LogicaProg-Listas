#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

void preencherMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("Preencha a matriz %dx%d com numeros inteiros:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void trocarLinhas(int matriz[TAMANHO][TAMANHO], int linha1, int linha2) {
    for (int j = 0; j < TAMANHO; j++) {
        int temp = matriz[linha1][j];
        matriz[linha1][j] = matriz[linha2][j];
        matriz[linha2][j] = temp;
    }
}
void trocarColunas(int matriz[TAMANHO][TAMANHO], int coluna1, int coluna2) {
    for (int i = 0; i < TAMANHO; i++) {
        int temp = matriz[i][coluna1];
        matriz[i][coluna1] = matriz[i][coluna2];
        matriz[i][coluna2] = temp;
    }
}
void trocarDiagonais(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][TAMANHO - 1 - i];
        matriz[i][TAMANHO - 1 - i] = temp;
    }
}
void trocarLinhaComColuna(int matriz[TAMANHO][TAMANHO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO; i++) {
        int temp = matriz[i][coluna];
        matriz[i][coluna] = matriz[linha][i];
        matriz[linha][i] = temp;
    }
}
void mostrarMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("Matriz resultante %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAMANHO][TAMANHO];

    preencherMatriz(matriz);
    trocarLinhas(matriz, 1, 7);
    trocarColunas(matriz, 3, 9);
    trocarDiagonais(matriz);
    trocarLinhaComColuna(matriz, 4, 9);
    mostrarMatriz(matriz);

    system("pause");
	return 0;
}

