#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float preco_atual, vmm, vf, aum1 = 0, aum2 = 0, dim = 0;

    printf("\nDigite o preco atual do produto: R$ ");
    scanf("%f", &preco_atual);

    printf("\nDigite o valor da media mensal do produto: R$ ");
    scanf("%f", &vmm);

    if (vmm < 500 || preco_atual < 30) {
        aum1 = preco_atual * (10 / 100);
    }

    if ((vmm >= 500 && vmm < 1200) || (preco_atual >= 30 && preco_atual < 80)) {
        aum2 = preco_atual * (15 / 100);
    }

    if (vmm >= 1200 || preco_atual >= 80) {
        dim = preco_atual * (20 / 100);
    }

    vf = preco_atual + aum1 + aum2 - dim;
    printf("\nO valor final do produto eh: R$ %.2f\n\n", vf);

    system("pause");
    return 0;
}
