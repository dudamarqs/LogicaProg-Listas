#include <stdio.h>
#include <stdlib.h>

#define PRODUTOS 10

int main(){
	int quantidades[PRODUTOS];
	float precos[PRODUTOS];
	float total_vendas = 0, comissao, maior_venda = 0; 
	int posicao_mVenda;
		
	//inserir pre�os:
	printf("\nInsira os precos dos produtos\n");
	for(int i = 0; i < PRODUTOS; i++){
		printf("Preco do %d%c produto: ", i+1);
		scanf("%f", &precos[i]);
		quantidades[i] = 0; //inicializando quantidades
	}
	
	//inserir quantidades:
	printf("\nInsira as quantidades vendidas de cada produto");
	for(int i = 0; i < PRODUTOS; i++){
		printf("Quantidade de vendas do %d%c produto: ", i+1);
		scanf("%i", &quantidades[i]);
		total_vendas += quantidades[i] * precos[i];
		if(quantidades[i] > maior_venda){
			maior_venda = quantidades[i];
			posicao_mVenda = i;
		}
	}
	
	//relat�rio
	printf("\nRelatorio de vendas:\n");
	for(int i = 0; i < PRODUTOS; i++){
		float total_prod = quantidades[i] * precos[i];
		printf("\nProduto %d   Quantidade: %d   Valor unitario: R$%.2f  Valor Total: R$%.2f\n", i+1, quantidades[i], precos[i], total_prod);
	}
	comissao = total_vendas * (5/100);
	
	printf("\nRELATORIO GERAL:\n");
	printf("Valor total de vendas: R$%.2f", total_vendas);
	printf("\nProduto mais vendido: %d - %d unidades", posicao_mVenda, quantidades[posicao_mVenda]);
	
	system("pause");
	return 0;
}
