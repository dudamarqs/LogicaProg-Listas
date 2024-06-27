#include <stdio.h>
#include <stdlib.h>

#define LINHAS 2
#define COLUNAS 3

void pontoDeSela(float matriz[LINHAS][COLUNAS]) {
    int linha, coluna;
    int ponto_de_sela = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            float elemento_atual = matriz[i][j];
            int menor_na_linha = 1;
            int maior_na_coluna = 1;
            
            for (int k = 0; k < COLUNAS; k++) {
                if (matriz[i][k] < elemento_atual) {
                    menor_na_linha = 0;
                    break;
                }
            }
            for (int k = 0; k < LINHAS; k++) {
                if (matriz[k][j] > elemento_atual) {
                    maior_na_coluna = 0;
                    break;
                }
            }
            if (menor_na_linha && maior_na_coluna) {
                ponto_de_sela = 1;
                linha = i;
                coluna = j;
                printf("\nO ponto de sela eh %.2f e esta na linha %d e coluna %d.\n", elemento_atual, linha, coluna);
            }
        }
	
	}
    if (!ponto_de_sela) {
        printf("A matriz n�o possui ponto de sela.\n");
    }
}

int main() {
    float matriz[LINHAS][COLUNAS];
    printf("Insira os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    pontoDeSela(matriz);

    system("pause");
	return 0;
}
