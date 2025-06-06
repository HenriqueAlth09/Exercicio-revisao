#include <stdio.h>

typedef struct {
    char nome[30];
    int quantidade;
    float preco;
} Produto;

Produto produtos[10];
int numProdutos = 0;

void cadastrarProduto() {
    if (numProdutos < 10) {
        printf("Digite o nome do produto: ");
        scanf("%29s", produtos[numProdutos].nome);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &produtos[numProdutos].quantidade);
        printf("Digite o preço do produto: ");
        scanf("%f", &produtos[numProdutos].preco);
        numProdutos++;
    } else {
        printf("Limite de produtos atingido.\n");
    }
}

void calcularValorTotal() {
    float valorTotal = 0;
    for (int i = 0; i < numProdutos; i++) {
        valorTotal += produtos[i].quantidade * produtos[i].preco;
    }
    printf("Valor total em estoque: R$ %.2f\n", valorTotal);
}

void listarProdutos() {
    printf("Produtos:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Nome: %s\n", produtos[i].nome);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: R$ %.2f\n", produtos[i].preco);
        printf("\n");
    }
}

int main() {
    int opcao;
    do {
        printf("1 - Cadastrar produto\n");
        printf("2 - Calcular valor total em estoque\n");
        printf("3 - Listar produtos\n");
        printf("0 - Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                calcularValorTotal();
                break;
            case 3:
                listarProdutos();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 0);
    return 0;
}
