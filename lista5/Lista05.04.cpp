#include <stdio.h>
#include <stdlib.h>

#define LIM 8

int main(){
	int vetor[LIM], vetor_p[LIM], vetor_n[LIM], i, j=0, k=0, num;

	for(i=0; i<LIM; i++){
		printf("\nInsira %d/8 valores: ", i+1);
		scanf("%d", &num);
		vetor[i]= num;	
	if(num>0){
		vetor_p[j] = num;
		j++;
	} else {
		vetor_n[k] = num;
		k++;
		}
	}

	printf("\nValores positivos: ");
	for(i=0; i<j; i++){
		printf("%d ", vetor_p[i]);
	}
	printf("\nValores negativos: ");
	for(i=0; i<k; i++){
		printf("%d ", vetor_n[i]);
	}

	system("pause");
	return 0;
}




