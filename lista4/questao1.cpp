#include <stdio.h>
#include <stdlib.h>

int binar(int a){
	int resp;
	if(a > 0)
		resp = 1;
	else
		resp = 0;
		
	return resp;
}

int main(){
	int a;
	
	do{
		printf("Insira um valor inteiro: ");
		scanf("%d", &a);
	}
	while (a == 0);
	printf("\Valor binario: %d\n\n", binar(a));

	system("pause");
	return 0;
}
