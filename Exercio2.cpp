// 2. Cinema "CinePonto"
// Clientes acumulam pontos a cada ingresso comprado. Crie um sistema com do-while para cadastrar
// a quantidade de ingressos comprados por vários clientes. O loop só termina quando o operador
// digitar 0. Exiba quantos pontos cada cliente acumulou.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
   setlocale(LC_ALL,""); 
   char nome[50];
   int opc, quant, total, pontos;
   
   
   do{
       printf("=--=CinePonto=--=\n");
       printf("1-Ingressos\n");
       printf("0-Sair\n");
       scanf("%d", &opc);
       
       switch(opc){
           
           case 1:
           printf("Quantos ingressos deseja?\n");
           scanf("%d", &quant);
           pontos = pontos + quant;
           printf("Seus pontos total são : %d\n", pontos);
           break;
           
           case 2:
           printf("Saindo...");
           break;
       }
       
       
   }while (opc != 0);
   return 0;
}

   
  
   
