#include <stdio.h>
#include <string.h>

#define NUM_FUNCIONARIOS 15
#define MESES 3
#define SALARIO_POR_PONTO 1000

typedef struct {
    char nome[50];
    float vendas[MESES];
    float pontuacao;
} Funcionario;

void cadastrarFuncionarios(Funcionario funcionarios[]) {
    int i, j;

    for (i = 0; i < NUM_FUNCIONARIOS; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].nome);

        for (j = 0; j < MESES; j++) {
            printf("Digite o valor das vendas do funcionario %d no mes %d: ", i + 1, j + 1);
            scanf("%f", &funcionarios[i].vendas[j]);
        }
    }
}

void calcularPontuacao(Funcionario funcionarios[]) {
    int i, j;

    for (i = 0; i < NUM_FUNCIONARIOS; i++) {
        funcionarios[i].pontuacao = 0;

        for (j = 0; j < MESES; j++) {
            funcionarios[i].pontuacao += funcionarios[i].vendas[j] / SALARIO_POR_PONTO;
        }
    }
}

void calcularPontuacaoPorMes(Funcionario funcionarios[]) {
    int i, j;
    float pontuacaoTotalPorMes;

    for (j = 0; j < MESES; j++) {
        pontuacaoTotalPorMes = 0;

        for (i = 0; i < NUM_FUNCIONARIOS; i++) {
            pontuacaoTotalPorMes += funcionarios[i].vendas[j] / SALARIO_POR_PONTO;
        }

        printf("Pontuacao total de todos os funcionarios no mes %d: %.2f\n", j + 1, pontuacaoTotalPorMes);
    }
}

void encontrarMaiorPontuacao(Funcionario funcionarios[]) {
    int i;
    float maiorPontuacao = funcionarios[0].pontuacao;
    int indiceMaiorPontuacao = 0;

    for (i = 1; i < NUM_FUNCIONARIOS; i++) {
        if (funcionarios[i].pontuacao > maiorPontuacao) {
            maiorPontuacao = funcionarios[i].pontuacao;
            indiceMaiorPontuacao = i;
        }
    }

    printf("Maior pontuacao: %.2f - Funcionario: %s\n", maiorPontuacao, funcionarios[indiceMaiorPontuacao].nome);
}

float calcularTotalVendido(Funcionario funcionarios[]) {
    int i, j;
    float totalVendido = 0;

    for (i = 0; i < NUM_FUNCIONARIOS; i++) {
        for (j = 0; j < MESES; j++) {
            totalVendido += funcionarios[i].vendas[j];
        }
    }

    return totalVendido;
}

int main() {
    Funcionario funcionarios[NUM_FUNCIONARIOS];

    cadastrarFuncionarios(funcionarios);
    calcularPontuacao(funcionarios);
    calcularPontuacaoPorMes(funcionarios);
    encontrarMaiorPontuacao(funcionarios);
    printf("Valor total vendido: %.2f\n", calcularTotalVendido(funcionarios));

    return 0;
}