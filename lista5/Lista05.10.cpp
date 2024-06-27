#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[100];
	int num, i = 0;
	printf("Insira os valores do vetor (insira 999 para parar): ");
	do{
		scanf("\n%d", &num);
		array[i] = num;
		i++;
	} while (num != 999);
	printf("\nVetor na ordem inversa:\n");
	for (int j = i - 2; j >= 0; j--){
		printf("%d ", array[j]);
	}

	system("pause");
	return 0;
}
