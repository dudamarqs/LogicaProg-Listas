#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float pes, polegadas, jardas, milhas;
    
    printf("\nInsira uma medida em pes: ");
    scanf("%f", &pes);

    // Calcula o resultado em polegadas.
    polegadas = pes * 12;

    // Calcula o resultado em jardas.
    jardas = pes * 3;

    // Calcula o resultado em milhas.
    milhas = pes / (1760 * 3);

    printf("\nMedida em polegadas: %.0f", polegadas);
    printf("\nMedida em jardas: %.0f", jardas);
    printf("\nMedida em milhas: %.6f\n\n", milhas);

    system("pause");
    return 0;
}