// Crie um sistema para identificar o tipo de combustível escolhido: 1 para gasolina, 
// 2 para etanol, 3 para diesel. Dependendo do combustível, o preço por litro muda. 
// Use switch-case para calcular o total abastecido com base na quantidade em litros.

#include <stdio.h>

int main(){
    int opc;
    float total, litros;
    
    printf("---Posto-BR---\n");
    printf("1- Etanol : 4.19\n");
    printf("2- Gasolina : 6.29\n");
    printf("3- Diesel : 6.06\n");
    scanf("%d", &opc);
    
    switch(opc){
        
        case 1:
        printf("Quantos litros de Etanol você deseja?\n");
        scanf("%f", &litros);
        total = total + litros * 4,19;
        printf("O total é: %.2f\n", total);
        break;
        
        case 2:
        printf("Quantos litros de Gasolina você deseja?\n");
        scanf("%f", &litros);
        total = total + litros * 6.29;
        printf("O total é: %.2f\n", total);
        break;
        
         case 3:
        printf("Quantos litros de Diesel você deseja?\n");
        scanf("%f", &litros);
        total = total + litros * 6.06;
        printf("O total é: %.2f\n", total);
        break;
        
    }
    
return 0;}
