#include <stdio.h>

typedef struct {
	char Produto[30];
	float preço;
} Produto;

int numProduto = 0;
Produto produtos[10];

void cadastrarProduto();
void listarProduto();
void finalizaFuncao();



int main() {
	int opcao;
	do {
		printf("--== Delicia de Trigo ==--\n");
		printf("1- Cadastra Produto\n");
		printf("2- Listar Produto\n");
		printf("0- Sair\n");
		printf("Selecione uma opção:\n");
		scanf("%d", &opcao);
		getchar();
		switch (opcao) {
		case 1:
			cadastrarProduto();
			break;
		case 2:
			listarProduto();
			break;
		case 0:
			printf("\nObrigado!\n");
			break;
		default:
			printf("\nOpcao Invalida!\n");
			break;
		}
	} while (opcao != 0);
	return 0;
}

void cadastrarProduto() {
	printf("--== Novo Produto ==--\n");
	printf("Produto:\n");
	scanf("%29s", produtos[numProduto].Produto);
	printf("Preço:\n");
	scanf("%f", &produtos[numProduto].preço);
	numProduto++;
	getchar();
	finalizaFuncao();
}

void listarProduto() {
	printf("--== Produtos ==--\n");
	for(int i = 0;i<numProduto;i++){
	printf("Produto: %29s\n", produtos[i].Produto);
	printf("Preço: %.2f\n", produtos[i].preço);
	getchar();
	    
	}
}

void finalizaFuncao() {
    printf("Tarefa cadastrada com sucesso!\n");
    printf("Pressione Enter para continuar...");
    getchar();
}





