#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num, i, j;
	float soma = 1.00, fat;

	printf("\nInsira um numero: ");
	scanf("%d", &num);

		if (num > 0)
		{
			for(i = 2; i <= num; i++)
			{
				fat = 1;
				for(j = i; j>1; j--)
					fat = fat * j;
				printf("\nFatorial de %d: %.2f\n", i, fat);
				soma = soma + 1/fat;
				printf("\nResultado da soma: %.2f\n", soma);
			}
			printf("\nResultado final da soma: %.4f\n\n", soma);
		}
		else 
		printf("\nO numero inserido deve ser maior do que 0!\n\n");

    system("pause");
    return 0;
}