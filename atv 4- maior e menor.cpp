#include <stdio.h>
#include <stdlib.h>

int main(){
    float produtos[10];
    float menor, maior;
    
    for (int i = 0; i < 10; i ++){
        printf("%d produto\n", i + 1);
        printf("Informe o valor: ");
        scanf("%f", &produtos[i]);
        printf("\n");
    }
    maior = produtos[0];
    menor = produtos[0];
    
    for (int i = 0; i < 10; i ++){
        if (produtos[i] > maior){
                maior = produtos[i];
            }
            
        if (produtos[i] < menor){
                menor = produtos[i];
            
            }
    }
    
    system ("clear");
    printf("O maior valor informado é: %.2f\n", maior);
    printf("O menor valor informado é: %.2f", menor);

    return 0;
}