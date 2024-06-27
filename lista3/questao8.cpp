#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    double num, sum = 0, max_num = INT_MIN, min_num = INT_MAX, even_sum = 0, even_count = 0;
    int odd_count = 0, count = 0;    
    printf("Digite os valores desejados\n(Digite 30000 quando terminar): ");
    
    while(scanf("%lf", &num) == 1 && num != 30000){
    sum += num;
    count ++;
    
    if (num > max_num) 
            max_num = num;
    if (num < min_num)     
            min_num = num;
    //fmod() é usada para calcular o resto da divisão de dois números de ponto flutuante.
    if (fmod(num, 2) == 0){
        even_sum += num;
        even_count++;
    } else {
        odd_count++;
    }
 }
    //cálculos da média e da porcentagem 
    double average = sum / count;
    double even_average = even_count > 0 ? even_sum / even_count : 0;
    double odd_percentage = (double) odd_count/ count * 100;
        
    printf("\n\nA soma dos numeros digitados eh: %.0lf\n", sum);
    printf("A quantidade de numeros digitados eh: %d\n", count);
    printf("A media dos numeros digitados eh: %.2f\n", average);
    printf("O maior numero digitado eh: %.2lf\n", max_num);
    printf("O menor numero digitado eh: %.2lf\n", min_num);
    printf("A media dos numeros pares eh: %.2f\n", even_average);
    printf("A porcentagem dos numeros impares em relação aos outros numeros eh: %.2lf%\n\n", odd_percentage);
     
return 0;
}