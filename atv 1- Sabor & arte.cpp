#include <stdio.h>
#include <stdlib.h>

void finalizaFuncao();

int main(){
    int opcao, quantPrincipal, quantSobremesa, quantBebida, nquant, nquant2, nquant3;
    float total = 0, desc = 0, vfinal = 0, tprincipal = 0, tsobremesa = 0, tbebida = 0;
    do{
    printf("---- Sabor & Arte ----\n");
    printf("1. Prato principal - R$60,00\n");
    printf("2. Sobremesa - R$ 30,00\n");
    printf("3. Bebida - R$10,00\n");
    printf("4. Fechar conta\n");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        system ("clear");
        printf("Você escolheu o prato principal!\n");
        printf("Quantas unidades gostaria de pedir?\n");
        scanf("%d", &quantPrincipal);
        tprincipal =  quantPrincipal * 60.00;
        nquant += quantPrincipal;
        total += tprincipal;
        finalizaFuncao();
        break;
        
        case 2:
        system ("clear");
        printf("Você escolheu a sobremesa!\n");
        printf("Quantas unidades gostaria de pedir?\n");
        scanf("%d", &quantSobremesa);
        tsobremesa = quantSobremesa * 30.00;
        nquant2 += quantSobremesa;
        total += tsobremesa;
        finalizaFuncao();
        break;
        
        case 3:
        system ("clear");
        printf("Você escolheu a bebida!\n");
        printf("Quantas unidades gostaria de pedir?\n");
        scanf("%d", &quantBebida);
        tbebida = quantBebida * 10.00;
        nquant3 += quantBebida;
        total += tbebida;
        finalizaFuncao();
        break;
        
        case 4:
        system ("clear");
        printf("Obrigado!\nEstamos finalizando seu pedido :)\n");
        finalizaFuncao();
        break;
        
        default:
        system ("clear");
        printf("Opção inválida, tente novamente.");
        finalizaFuncao();
        break;
        
    }
    } while (opcao != 4);
    
    if (nquant > 3){
        if (nquant2 >= 1 && nquant3 >= 1){
            desc = total * 0.15; 
        }
        else{
            desc = total * 0.1;
        }
    }
    else{
        desc = 0;
    }
    
    vfinal = total - desc;
    
    printf("---- Pagamento ----\n");
    printf("O valor do seu pedido sem descontos é: %.2f\n", total);
    printf("O valor de seu pedido com desconto é: %.2f", vfinal);
    
    return 0;
}

void finalizaFuncao(){
    printf("Enter para continuar...");
    getchar();  
    getchar();
    system("clear");
}