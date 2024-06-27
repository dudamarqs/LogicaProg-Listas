#include <stdio.h>
#include <stdlib.h>

#define LINHAS_MATRIZ1 3
#define COLUNAS_MATRIZ1 4
#define LINHAS_MATRIZ2 4
#define COLUNAS_MATRIZ2 2
#define LINHAS_MATRIZ_RESULTANTE 3
#define COLUNAS_MATRIZ_RESULTANTE 2

// Fun��o para preencher a primeira matriz
void preencherMatriz1(float matriz[LINHAS_MATRIZ1][COLUNAS_MATRIZ1]) {
    printf("Preencha a primeira matriz %dx%d:\n", LINHAS_MATRIZ1, COLUNAS_MATRIZ1);
    for (int i = 0; i < LINHAS_MATRIZ1; i++) {
        for (int j = 0; j < COLUNAS_MATRIZ1; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Fun��o para preencher a segunda matriz
void preencherMatriz2(float matriz[LINHAS_MATRIZ2][COLUNAS_MATRIZ2]) {
    printf("\nPreencha a segunda matriz %dx%d:\n", LINHAS_MATRIZ2, COLUNAS_MATRIZ2);
    for (int i = 0; i < LINHAS_MATRIZ2; i++) {
        for (int j = 0; j < COLUNAS_MATRIZ2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Fun��o para calcular o produto matricial
void produtoMatricial(float matriz1[LINHAS_MATRIZ1][COLUNAS_MATRIZ1], float matriz2[LINHAS_MATRIZ2][COLUNAS_MATRIZ2], float matriz_resultante[LINHAS_MATRIZ_RESULTANTE][COLUNAS_MATRIZ_RESULTANTE]) {
    for (int i = 0; i < LINHAS_MATRIZ1; i++) {
        for (int j = 0; j < COLUNAS_MATRIZ2; j++) {
            matriz_resultante[i][j] = 0;
            for (int k = 0; k < COLUNAS_MATRIZ1; k++) {
                matriz_resultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

// Fun��o para exibir uma matriz
void mostrarMatriz(float matriz[LINHAS_MATRIZ_RESULTANTE][COLUNAS_MATRIZ_RESULTANTE], int linhas, int colunas) {
    printf("Matriz resultante %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[LINHAS_MATRIZ1][COLUNAS_MATRIZ1];
    float matriz2[LINHAS_MATRIZ2][COLUNAS_MATRIZ2];
    float matriz_resultante[LINHAS_MATRIZ_RESULTANTE][COLUNAS_MATRIZ_RESULTANTE];
    
    preencherMatriz1(matriz1);
    preencherMatriz2(matriz2);

    produtoMatricial(matriz1, matriz2, matriz_resultante);
    mostrarMatriz(matriz_resultante, LINHAS_MATRIZ_RESULTANTE, COLUNAS_MATRIZ_RESULTANTE);

    system("pause");
	return 0;
}

