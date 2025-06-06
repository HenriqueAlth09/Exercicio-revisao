#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, media;
    int i, j;
    
    printf("---- Língua Viva ----\n");

    for (i = 0; i < 5; i++){
        printf("Aluno %d:\n", i + 1);
        media = 0;
        
        for (j = 0; j < 4; j++){
            printf("Nota da prova %d: ", j + 1);
            scanf("%f", &nota);
            media += nota;
        }
        
        media /= 4;
        printf("Média final: %.2f\n", media);
        
        if (media >= 6){
            printf("Aprovado!\n");
        } 
        
        else {
            printf("Reprovado!\n");
        }
        
        printf("\n-------------------\n");
    }

    return 0;
}