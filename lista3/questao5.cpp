#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, ant1 = 1, ant2 = 0, num_atual;
    
    printf("8 primeiros termos da sequência de Fibonacci:");
    printf("%d ", ant2);
    printf("%d ", ant1);

    for(i = 3; i <= 8; i++){
        num_atual = ant1 + ant2;
            printf("%d ", num_atual);
        ant2 = ant1;
        ant1 = num_atual;
    }

    system("pause");
    return 0;
}