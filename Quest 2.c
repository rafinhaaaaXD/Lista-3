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
    struct Taluno *PtrA, //Declaração de um ponteiro para uma variável do tipo Taluno
    aluno; // Decalarção de uma variável do tipo Taluno

    // Inicialização do ponteiro PtrA com o endereço da variável aluno
    PtrA = &aluno;

    //Leitura dos dados do aluno
    printf("Insira o nome do aluno: ");
    gets(PtrA->nome);
    printf("Insira o sobrenome do aluno: ");
    gets(PtrA->sobrenome);
    printf("Insira a idade do aluno: ");
    // Como o buffer do teclado ainda contém o enter/quebra de linha ('\n') que o usuário digitou, é necessário descartá-lo
    scanf("%d%*c", &PtrA->idade); // Para isso, é utilizado o especificador de conversão %*c
    printf("Insira o numero de telefone do aluno: ");
    gets(PtrA->telefone);
    printf("Insira o sexo do aluno [M/F]: ");
    scanf("%c%*c", &PtrA->sexo);
    printf("Insira o email do aluno: ");
    gets(PtrA->email);

    //Impressão dos dados do aluno
    printf("\nO nome do aluno eh: %s %s\n", PtrA->nome, PtrA->sobrenome);
    printf("A idade do aluno eh: %d\n", PtrA->idade);
    printf("O numero de telefone do aluno eh: %s\n", PtrA->telefone);
    printf("O sexo do aluno eh: %c\n", PtrA->sexo);
    printf("O email do aluno eh: %s", PtrA->email);

    return 0;
}
