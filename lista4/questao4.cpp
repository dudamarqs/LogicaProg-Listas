#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int convert_sec(int sec, int *hours, int *min, int *rest_sec){
	//converter segundos para horas:
	*hours = sec/3600;
	//calcular o resto dos segundos depois das horas
	int sec_rest_hours = sec % 3600;
	//calcular minutos:
	*min = sec_rest_hours/60;
	//calcular segundos restantes:
	*rest_sec = sec_rest_hours % 60;
 }

int main(){
	int sec, min, hours, rest_sec;
	printf("Insira um valor em segundos: ");
	scanf("%d", &sec);
	
	convert_sec(sec, &hours, &min, &rest_sec);
	printf("\n%d segundos transformados em horas, minutos e segundos eh: %d:%d:%d", sec, hours, min, rest_sec);

	system("pause");
	return 0;
}
