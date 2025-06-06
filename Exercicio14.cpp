#include <stdio.h>

typedef struct {
    char nome[30];
    int km;
} Carro;

void listarCarro();
int numCarro = 0;
Carro carros[5];

int main() {
    int km;
    char nome[100];
    printf("==--- Bem - Vindo ---==\n");
    do {
        printf("Qual a Km do seu veiculo\n");
        scanf("%d", &carros[numCarro].km);
        printf("Informe o nome do seu carro?\n");
        scanf("%29s", carros[numCarro].nome);
        numCarro++;
    } while (numCarro < 5);
    listarCarro();
    return 0;
}

void listarCarro() {
    int opcao;
    do{
    printf("--== Carros ==--\n");
    printf("1- Listar todos os Carros\n");
    printf("2- Listar Carros com mais de 100.000km\n");
    printf("Selecione uma opção:\n");
    scanf("%d", &opcao);
    getchar();
    if (opcao == 1) {
        printf("--== Todos os Carros ==--\n");
        for (int i = 0; i < numCarro; i++) {
            printf("Carro: %s\n", carros[i].nome);
            printf("km: %d\n", carros[i].km);
        }
    } else if (opcao == 2) {
        printf("--== Carros com mais de 100.000km ==--\n");
        int encontrou = 0;
        for (int i = 0; i < numCarro; i++) {
            if (carros[i].km > 100000) {
                printf("Carro: %s\n", carros[i].nome);
                printf("km: %d\n", carros[i].km);
                encontrou = 1;
            }
        }
        if (!encontrou) {
            printf("Nenhum carro com mais de 100.000km encontrado.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }
    printf("Pressione Enter para continuar...");
    getchar();
    printf("Pressione 0 para finalizar");
    }while (opcao != 0);
}
