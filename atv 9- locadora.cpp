#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
     printf("---- Locadora Vídeo Bom ----\n");
    do{
        printf("Quantos filmes deseja alugar (1-5): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 5);
    
    printf("Obrigado!\n");
    
    return 0;
}