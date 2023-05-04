#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    char sobrenome [40];
    int idade;
    char telefone[20];
    char sexo;
    char email[50];
}Taluno;

int main()
{
    Taluno *PtrA;

    PtrA = malloc(sizeof(Taluno));

    if(PtrA == NULL){
      printf("ERRO!!!");
      exit(-1);
    }

    printf("Insira o nome do aluno: ");
    gets(PtrA->nome);
    printf("Insira o sobrenome do aluno: ");
    gets(PtrA->sobrenome);
    printf("Insira a idade do aluno: ");
    scanf("%d%*c", &PtrA->idade);
    printf("Insira o numero de telefone do aluno: ");
    gets(PtrA->telefone);
    printf("Insira o sexo do aluno [M/F]: ");
    scanf("%c%*c", &PtrA->sexo);
    printf("Insira o email do aluno: ");
    gets(PtrA->email);

    printf("\nO nome do aluno eh: %s %s\n", PtrA->nome, PtrA->sobrenome);
    printf("A idade do aluno eh: %d\n", PtrA->idade);
    printf("O numero de telefone do aluno eh: %s\n", PtrA->telefone);
    printf("O sexo do aluno eh: %c\n", PtrA->sexo);
    printf("O email do aluno eh: %s", PtrA->email);

    free(PtrA);
  
    return 0;
}
