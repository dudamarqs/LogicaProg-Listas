#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sum(int n){
	float sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (pow(i, 2) + 1)/(i + 3);
	}
	return sum;
}
int main(){
	int N;
	printf("\nInsira um valor para N: ");
	scanf("%d", &N);
	printf("\nValor de S: %.2f\n\n", sum(N));
	
	system("pause");
	return 0;
}
