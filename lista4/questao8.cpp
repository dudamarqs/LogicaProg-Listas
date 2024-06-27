#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

float peso_ideal(float height, char sex){
	float peso_ideal;
	switch(sex){
		case 'M':
			peso_ideal = 72.7*height - 58;
			break;
		case 'F':
			peso_ideal = 62.1*height - 44.7;
			break;
	}
	return peso_ideal;
}

int main(){
	float height;
	char sex;
	
	printf("\nInforme a sua altura em metros: ");
	scanf("%f", &height);
	
	printf(" \nDigite (F) para Feminino e (M) para Masculino \nInforme o seu sexo: ");
	scanf("%s", &sex);
		
	sex = toupper(sex); //transforma a letra em maiúscula
	printf("\nSeu peso ideal: %.2fkg\n\n", peso_ideal(height, sex));

	system("pause");	
	return 0;
}
