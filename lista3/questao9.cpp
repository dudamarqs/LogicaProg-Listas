#include <stdio.h>
#include <stdlib.h>

int main(){
	int voto=5, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
	while (voto != 0)
	{
		printf("\nDigite o numero do seu candidato \n(1, 2, 3, 4, 5 ou 6): ");
		scanf("%d", &voto);
	switch (voto)
	{
		case 1: 
			n1++;
			break;
		case 2: 
			n2++;
			break;
		case 3: 
			n3++;
			break;
		case 4:
			n4++;
			break;
		case 5: 
			n5++;
			break;
		case 6: 
			n6++;
			break;
		case 0:
		break;
		
	default: printf("\nDigite uma opcao de voto valida!");
		}
	}

	if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n1>n6){ printf("\nO candidato numero 1 foi o vencedor!"); }
	else if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n2>n6){ printf("\nO candidato numero 2 foi o vencedor!"); }
	else if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n3>n6){ printf("\nO candidato numero 3 foi o vencedor!"); }
	else if (n4>n1 && n4>n2 && n4>n3 && n4>n5 && n4>n6){ printf("\nO candidato numero 4 foi o vencedor!"); }
	else if (n5>n1 && n5>n2 && n5>n4 && n5>n5 && n5>n6){ printf("\nA maioria dos votos sao em branco."); }
	else if (n6>n1 && n6>n2 && n6>n3 && n6>n4 && n6>n5){ printf("\nHouve um empate!"); }

    system("pause");
    return 0;
}
