#include <stdio.h>

typedef struct {
    char Nome[30];
    int ano;
} Livro;

int numLivro = 0;
Livro livros[10];

void cadastrarLivro();
void listarLivro();
void finalizaFuncao();

int main() {
    int opcao;
    do {
        printf("--== Letras Vivas ==--\n");
        printf("1- Cadastrar Livro\n");
        printf("2- Listar Livros\n");
        printf("0- Sair\n");
        printf("Selecione uma opção:\n");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
            case 1:
                cadastrarLivro();
                break;
            case 2:
                listarLivro();
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

void cadastrarLivro() {
    printf("--== Novo Livro ==--\n");
    printf("Livro:\n");
    scanf("%29s", livros[numLivro].Nome);
    printf("Ano:\n");
    scanf("%d", &livros[numLivro].ano);
    numLivro++;
    getchar();
    finalizaFuncao();
}

        void listarLivro() {
    int opcao;
    printf("--== Livros ==--\n");
    printf("1- Listar todos os livros\n");
    printf("2- Listar livros antes de 2000\n");
    printf("Selecione uma opção:\n");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1) {
        printf("--== Todos os Livros ==--\n");
        for (int i = 0; i < numLivro; i++) {
            printf("Livro: %s\n", livros[i].Nome);
            printf("Ano: %d\n", livros[i].ano);
        }
    } else if (opcao == 2) {
        printf("--== Livros antes de 2000 ==--\n");
        int encontrou = 0;
        for (int i = 0; i < numLivro; i++) {
            if (livros[i].ano < 2000) {
                printf("Livro: %s\n", livros[i].Nome);
                printf("Ano: %d\n", livros[i].ano);
                encontrou = 1;
            }
        }
        if (!encontrou) {
            printf("Nenhum livro encontrado antes de 2000.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    printf("Pressione Enter para continuar...");
    getchar();
}
    

void finalizaFuncao() {
    printf("Livro cadastrado com sucesso!\n");
    printf("Pressione Enter para continuar...");
    getchar();
}
