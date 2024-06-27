#include<stdio.h>
#include<stdlib.h>

int main(){
    float a, b, c;
    int i;

	printf("\nDigite um valor para A: ");
	scanf("%f", &a);
	
    printf("\nDigite um valor para B: ");
	scanf("%f", &b);
	
    printf("\nDigite um valor para C: ");
	scanf("%f", &c);
	
    printf("\nEscolha uma opcao: \n");
    printf("(1) A B C em ordem crescente.\n");
    printf("(2) A B C em ordem decrescente.\n");
    printf("(3) O maior valor fica entre os outros dois numeros\n\n");
	scanf("%d", &i);
    
    switch(i) {
	    case 1: // Ordem crescente.
	        if (a < b && a < c)
			    {
			    if (b < c)
				    printf("Valores em ordem crescente: \n%.2f\t%.2f\t%.2f\t\n\n", a, b, c);
			    else
				    printf("Valores em ordem crescente: \n%.2f\t%.2f\t%.2f\t\n\n", a, c, b);
			    }
		    else if	(b < a && b < c)
			    {
			    if (a < c)
				    printf("Valores em ordem crescente: \n%.2f\t%.2f\t%.2f\t\n\n",b,a,c);
			    else
				    printf("Valores em ordem crescente: \n%.2f\t%.2f\t%.2f\t\n\n",b,c,a);
			    }
		    else if (c < a && c < b)
			    {
			    if (a < b)
				    printf("Valores em ordem crescente: \n%.2f\t%.2f\t%.2f\t",c,a,b);
			    else
				    printf("Valores em ordem crescente: \n%.2f\t%.2f\t%.2f\t",c,b,a);
			    }
        break;

	    case 2: // Ordem decrescente.
		    if (a > b && a >c)
			    {
			    if (c > b)
				    printf("Valores em ordem decrescente: \n%.2f\t%.2f\t%.2f\t\n\n", a, b, c);
			    else
				    printf("Valores em ordem decrescente: \n%.2f\t%.2f\t%.2f\t\n\n", a, c, b);	
			    }
		    else if (b > a && b > c)
			    {
			    if (a > c)
				    printf("Valores em ordem decrescente: \n%.2f\t%.2f\t%.2f\t\n\n", b, a, c);
			    else
				    printf("Valores em ordem decrescente: \n%.2f\t%.2f\t%.2f\t\n\n", b, c, a);
			    }
		    else if (c > b && c > a)
			    {
			    if (a > b)
				    printf("Valores em ordem decrescente: \n%.2f\t%.2f\t%.2f\t\n\n", c, b, a);
			    else
				    printf("Valores em ordem decrescente: \n%.2f\t%.2f\t%.2f\t\n\n", c, a, b);
			    }	
        break;

	    case 3: // Maior valor no meio.
		    if (a > b && a > c)
			    {printf("\nMaior valor no meio: \n%.2f\t%.2f\t%.2f\t\n\n", b, a, c);
			    }
		    else if	(b > a && b > c)
			    {printf("\nMaior valor no meio: \n%.2f\t%.2f\t%.2f\t\n\n", a, b, c);
			    }
		    else if (c > a && c > b)
			    {printf("\nMaior valor no meio: \n%.2f\t%.2f\t%.2f\t\n\n", c, a, b);
			    }
        break;

        default:
            printf("\nVoce escolheu uma opcao invalida.\n\n");
	    }

    system("pause");
    return 0;
}