#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int multiplicarVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] *= 2;
    }
}
int main(void){
    int v[TAM];
    printf("Insira os 10 elementos do vetor (separe por um espa�o):\n");
    for(int i = 0; i < TAM; i++){
        scanf("%d", &v[i]);
    }
    multiplicarVetor(v, TAM);
    system("cls");
    printf("\nVetor apos a multiplica�ao:\n");
    for(int i = 0; i < TAM; i++){
        printf("%d ", v[i]);
    }

    return 0;
}
