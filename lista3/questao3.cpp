#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=1, b=4, cont_print=1, num;

	//cont_print serve pra "enumerar" a posição do termo.
	printf("\nDigite o numero de termos a serem impressos na tela (N): ");
	scanf("%d", &num);

	do{
		printf("%d ", a);
		cont_print++;	
		if(cont_print>num)
			break;

		printf("%d ",b);
		cont_print++;
		if(cont_print>num)
			break;

		printf("%d ",b);
		cont_print++;
		if(cont_print>num)
			break;	
		a++;
		b++;
	} while (a<=num);

    system("pause");
    return 0;
}