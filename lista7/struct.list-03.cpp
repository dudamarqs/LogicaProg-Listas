#include <stdio.h>
#include <stdlib.h>

struct Produto {
    int codigo;
    char descricao[100];
    float preco_compra;
    float preco_venda;
    int quantidade_estoque;
    int estoque_minimo;
};

void cadastrarProdutos(struct Produto produtos[], int num_produtos) {
    for (int i = 0; i < num_produtos; i++) {
        printf("Cadastro do produto %d:\n", i + 1);
        printf("Digite o codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Digite a descricao: ");
        scanf("%s", produtos[i].descricao);
        printf("Digite o preco de compra: ");
        scanf("%f", &produtos[i].preco_compra);
        printf("Digite o preco de venda: ");
        scanf("%f", &produtos[i].preco_venda);
        printf("Digite a quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade_estoque);
        printf("Digite o estoque minimo: ");
        scanf("%d", &produtos[i].estoque_minimo);
    }
}

void calcularLucro(struct Produto produto) {
    float lucro = produto.preco_venda - produto.preco_compra;
    float percentual_lucro = (lucro / produto.preco_compra) * 100;

    printf("Produto: %s\n", produto.descricao);
    printf("Lucro: R$ %.2f\n", lucro);
    printf("Percentual de Lucro: %.2f%%\n", percentual_lucro);
}

void produtosAbaixoEstoqueMinimo(struct Produto produtos[], int num_produtos) {
    printf("Produtos abaixo do estoque minimo:\n");
    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].quantidade_estoque < produtos[i].estoque_minimo) {
            printf("Codigo: %d, Descricao: %s\n", produtos[i].codigo, produtos[i].descricao);
        }
    }
}

int main(){
    int num_produtos = 1;
    struct Produto lista_produtos[num_produtos];
    
    cadastrarProdutos(lista_produtos, num_produtos);
    calcularLucro(lista_produtos[0]);
    produtosAbaixoEstoqueMinimo(lista_produtos, num_produtos);
    return 0;
}
