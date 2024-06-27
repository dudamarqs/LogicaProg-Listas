#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define LINHAS 3
#define COLUNAS 4

int inserirMatriz(int matriz[LINHAS][COLUNAS]){
	int i, j;
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("Insira o valor da posicao [%d][%d] da matriz: ", i, j);
			scanf("%d", &matriz[i][j]);
			}
		}
	}

void somasMatriz(int matriz[LINHAS][COLUNAS], int resultado[LINHAS]){
	for(int i = 0; i < LINHAS; i++){
		resultado[i] = 0;
		for(int j = 0; j < COLUNAS; j++){
			resultado[i] += matriz[i][j];
		}
	}
}
int multMatriz(int matriz[LINHAS][COLUNAS], int resultado[LINHAS]){
	for(int i = 0; i < LINHAS; i++){
		for(int j = 0; j < COLUNAS; j++){
			matriz[i][j] *= resultado[i];
		}
	}
}
int mostrarMatriz(int matriz[LINHAS][COLUNAS]){
	int i, j;
	printf("\nMatriz Resultante:\n");
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("%d ", matriz[i][j]);
	}
	printf("\n");
	}
}

int main(){
	int matriz[LINHAS][COLUNAS];
	int vetorSomas[LINHAS];
	
	inserirMatriz(matriz);
	somasMatriz(matriz, vetorSomas);
	multMatriz(matriz, vetorSomas);
	mostrarMatriz(matriz);

	system("pause");
	return 0;
}
