#include <stdio.h>

typedef struct{
    char nome[30];
    int idade;
} Animal;

void listarAnimal();

int numAnimal = 0;
Animal Animais[6];

int main(){
    char nome[30];
    int idade;
    
    do{
        printf("==--- Bem - Vindo ---==\n");
        printf("Qual o nome do seu animal?\n");
        scanf("%s", Animais[numAnimal].nome);
        printf("Informe a idade do seu animal?\n");
        scanf("%d", &Animais[numAnimal].idade);
        numAnimal++;
    }while(numAnimal<7);
    
    listarAnimal();
}

 void listarAnimal() {
    int opcao;
    printf("--== Animais ==--\n");
    printf("1- Listar todos os Animais\n");
    printf("2- Listar Animais com mais de 5 anos\n");
    printf("Selecione uma opção:\n");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1) {
        printf("--== Todos os Animais ==--\n");
        for (int i = 0; i < numAnimal; i++) {
            printf("Livro: %s\n", Animais[i].nome);
            printf("Ano: %d\n", Animais[i].idade);
        }
    } else if (opcao == 2) {
        printf("--== Animais com mais de 5 ==--\n");
        int encontrou = 0;
        for (int i = 0; i < numAnimal; i++) {
            if (Animais[i].idade < 5) {
                printf("Animal: %s\n", Animais[i].nome);
                printf("Idade: %d\n", Animais[i].idade);
                encontrou = 1;
            }
        }
        if (!encontrou) {
            printf("Nenhum Animal com mais de 5\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    printf("Pressione Enter para continuar...");
    getchar();
}
    
    



