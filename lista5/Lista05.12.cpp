#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4

void encontrarMenorElemento(float matriz[LINHAS][COLUNAS], float *menorElemento, int *linha, int *coluna) {
    *menorElemento = matriz[0][0];
    *linha = 0;
    *coluna = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] < *menorElemento) {
                *menorElemento = matriz[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
}
int maiorValorLinha(float matriz[LINHAS][COLUNAS], int linha) {
    int maiorValor = matriz[linha][0];
    for (int j = 1; j < COLUNAS; j++) {
        if (matriz[linha][j] > maiorValor) {
            maiorValor = matriz[linha][j];
        }
    }
    return maiorValor;
}
int main() {
    float matriz[LINHAS][COLUNAS];
    float menorElemento;
    int linhaMenor, colunaMenor;

    printf("Insira os elementos da matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    encontrarMenorElemento(matriz, &menorElemento, &linhaMenor, &colunaMenor);
    int minmax = maiorValorLinha(matriz, linhaMenor);

    printf("\nO MINMAX da matriz eh %d\n", minmax);
    printf("Ele está na linha %d e coluna %d.\n", linhaMenor, colunaMenor);

    return 0;
}

