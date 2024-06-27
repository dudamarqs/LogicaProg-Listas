#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int n, j, a, fatorial, num;
	
	printf("Insira o total de numeros que serao digitados: ");
	scanf("%d", &num);

	for(n=1; n<=num; n++) {
		printf("\nDigite o numero que deseja saber o fatorial: ");
		scanf("%d",&a);
		
        fatorial = 1;
		for	(j=a; j>=1; j--)
		fatorial*= j;

		printf("Fatorial de %d: %d\n",a, fatorial);
	}
	
    system("pause");
    return 0;
}