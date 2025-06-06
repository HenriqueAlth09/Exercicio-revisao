#include <stdio.h>
#include <stdlib.h>

int main() {
    int nota[7];
    float media = 0;

    printf("---- Café com Letras ----\n");

    for (int i = 0; i < 7; i++) {
        do {
            printf("Nota dada de (1-10) pelo %d cliente: ", i + 1);
            scanf("%d", &nota[i]);
        } while (nota[i] < 1 || nota[i] > 10);

        media += nota[i];
    }

    media /= 7;

    printf("A média é: %.2f\n", media);

    if (media >= 8.00) {
        printf("A média é boa!\n");
    } 
    
    else if (media >= 5) {
        printf("A média é razoável!\n");
    } 
    
    else {
        printf("A média é ruim!\n");
    }

    return 0;
}