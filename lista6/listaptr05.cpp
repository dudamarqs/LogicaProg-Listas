#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o a quantidade de elementos que serao recebidos pelo vetor: ");
    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int));
    
    if(vet == NULL){
        printf("\nHouve um erro na alocacao de memoria. \nTente novamente. =(");
        return 1;
    }
    printf("\nPreencha o vetor com os valores desejados:");
    printf("\n(Separe os elementos por um espaco)\n");
    for(int i=0; i<n; i++){
        scanf("\n%d", &vet[i]);
    }
    //imprimir vetor
    system("cls");
    printf("\nVetor fornecido:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    free(vet);

    return 0;
}
