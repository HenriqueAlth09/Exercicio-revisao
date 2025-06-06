#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float imc;
} Aluno;

void dadosAluno();
void classificacao();

int main(){
    
    dadosAluno();
    
    classificacao();
    
    return 0;
}

void dadosAluno(){
    Aluno aluno;
    printf("---- Academia Corpo em Movimento ----\n");
    printf("Informe seus dados:\n");
    printf("Nome: ");
    scanf(" %[^\n]", aluno.nome);
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    printf("IMC: ");
    scanf("%f", &aluno.imc);
}

void classificacao(){
    Aluno aluno;
    if (aluno.imc < 25){
        printf("\nVocê está saudável!\n");
    }
    
    else if (aluno.imc > 30){
        printf("\nVocê está obeso!\n");
    }
    
    else{
        printf("\nVocê está com sobrepeso!\n");
    }
    
}