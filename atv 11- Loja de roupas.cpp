#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    printf("---- FashionMix ----\n");
    printf("1- camisa\n");
    printf("2- calça\n");
    printf("3- casaco\n");
    scanf("%d", &opcao);
    
    system ("clear");
    
    switch (opcao){
        case 1:
        printf("Você escolheu camisa!\n");
        printf("O valor é de R$80,00 a unidade");
        break;
        
        case 2:
        printf("Você escolheu calça!\n");
        printf("O valor é de R$120,00 a unidade");
        break;
        
        case 3:
        printf("Você escolheu casaco!\n");
        printf("O valor é de R$200,00 a unidade");
        break;
        
        default:
        printf("Opção inválida, tente novamente...\n");
        break;
    }
    
    return 0;
}