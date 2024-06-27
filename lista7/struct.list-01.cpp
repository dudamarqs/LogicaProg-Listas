#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CONTAS 21

// Definição da estrutura para uma conta banc�ria
struct conta {
    int numero;
    char nome[100];
    double saldo;
};

// Função para cadastrar uma nova conta
void cadastroConta(struct conta contas[], int *numContas) {
    if (*numContas >= NUM_CONTAS) {
        printf("\nNumero de contas atingido.");
    }

    // Declara nova conta
    struct conta novaConta;

    printf("\nDigite o numero da conta (8 numeros): ");
    scanf("%d", &novaConta.numero);

    // Verifica se a conta j� existe
    for (int i = 0; i < *numContas; i++) {
        if (contas[i].numero == novaConta.numero) {
            printf("\nEssa conta ja existe.");
            return; // Retorna prematuramente se a conta j� existir
        }
    }

    printf("\nNome: ");
    scanf(" %[^\n]", novaConta.nome); // Corrigido para eliminar poss�veis problemas de buffer
    printf("\nDigite o saldo da conta: R$ ");
    scanf("%lf", &novaConta.saldo);

    // Adiciona a nova conta ao array de contas
    contas[*numContas] = novaConta;
    (*numContas)++;
    system("cls");
    printf("\nSua conta foi cadastrada!");
}

// Função para visualizar as contas de um cliente
void verContas(struct conta contas[], int numContas, char nome[]) {
    printf("\nContas do cliente %s\n", nome);

    for (int i = 0; i < numContas; i++) {
        if (strcmp(contas[i].nome, nome) == 0) {
            system("cls");
            printf("Conta: %d\n Saldo: R$ %.2lf\n", contas[i].numero, contas[i].saldo);
        }
    }
}

// Função para excluir a conta com o menor saldo
void excluirConta(struct conta contas[], int *numContas) {
    if (*numContas == 0) {
        printf("\nNao ha contas cadastradas.");
        return;
    }
    int menorSaldo = 0;
    for (int i = 0; i < *numContas; i++) {
        if (contas[i].saldo < contas[menorSaldo].saldo) {
            menorSaldo = i; // Encontra a conta com o menor saldo
        }
    }
    printf("\nA conta com menor saldo foi excluida: %d", contas[menorSaldo].numero);
    contas[menorSaldo] = contas[(*numContas) - 1];
    (*numContas)--;
}

int main(){
    struct conta contas[NUM_CONTAS];
    int numContas = 0;
    int opcao; // Corrigido o nome da variável

    printf("O que deseja fazer?\n");
    printf("(1) Cadastrar conta\n(2) Ver contas\n(3) Excluir conta\n(4) Sair\n");
    printf("\nEscolha um numero: ");
    scanf("%d", &opcao); // Corrigido o nome da vari�vel

    do {
        switch (opcao) {
            case 1:
                cadastroConta(contas, &numContas);
                break;
            case 2:
                printf("\nDigite o nome do cliente: ");
                char nomeCliente[100];
                scanf(" %[^\n]", nomeCliente); // Corrigido para eliminar possiveis problemas de buffer
                verContas(contas, numContas, nomeCliente);
                break;
            case 3:
                excluirConta(contas, &numContas);
                break;
            case 4:
                printf("\nSaindo do programa...");
                system("pause");
                break; // Adicionado break para sair do switch
            default:
                printf("\nOpção invalida.");
        }
        printf("\n\nO que deseja fazer?\n"); // Adicionado para repetir a pergunta
        printf("(1) Cadastrar conta\n(2) Ver contas\n(3) Excluir conta\n(4) Sair");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 4); // Corrigido a condição do loop

    return 0;
}

