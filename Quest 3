#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para armazenar informações de um aluno
struct Taluno{
    char nome[20];
    char sobrenome [40];
    int idade;
    char telefone[20];
    char sexo;
    char email[50];
};

int main()
{
   struct Taluno aluno; // Declaraçao da variavel para armazenar os dados do aluno

   //Solicitacao das informacoes do aluno
   printf("Insira o nome do aluno: ");
   gets(aluno.nome);
   printf("Insira o sobrenome do aluno: ");
   gets(aluno.sobrenome);
   printf("Insira a idade do aluno: ");
   // Como o buffer do teclado ainda contém o enter/quebra de linha ('\n') que o usuário digitou, é necessário descartá-lo
   scanf("%d%*c", &aluno.idade); // Para isso, é utilizado o especificador de conversão %*c
   printf("Insira o numero de telefone do aluno: ");
   gets(aluno.telefone);
   printf("Insira o sexo do aluno [M/F]: ");
   scanf("%c%*c", &aluno.sexo);
   printf("Insira o email do aluno: ");
   gets(aluno.email);

   //Impressao das informacoes do aluno
   printf("\nO nome do aluno eh: %s %s\n", aluno.nome, aluno.sobrenome);
   printf("A idade do aluno eh: %d\n", aluno.idade);
   printf("O numero de telefone do aluno eh: %s\n", aluno.telefone);
   printf("O sexo do aluno eh: %c\n", aluno.sexo);
   printf("O email do aluno eh: %s", aluno.email);

   return 0;
}
