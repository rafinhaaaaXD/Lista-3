#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Definição da estrutura Tponto com as coordenadas x e y
typedef struct{
    float x, y; //Variáveis declaradas do tipo float para armazenar as coordenadas x e y do ponto e do centro da esfera
}Tponto;

//Definição da estrutura Tesfera com o centro e o raio da esfera
typedef struct{
    Tponto centro; //Variável declarada do tipo Tponto que armazena as coordenadas x e y do centro da esfera
    float raio; //Variável declarada do tipo float que armazena o valor do raio da esfera
}Tesfera;

int main(){
    Tponto ponto, //Variável declarada do tipo Tponto para armazenar as coordenadas
    *ptrP; //Ponteiro declarado do tipo Tponto para armazenar o endereço de memória da variável ponto
    Tesfera esfera, //Variável declarada do tipo Tesfera para armazenar as informações da esfera, como as coordenadas do centro e o valor do raio
    *ptrE; //Ponteiro declarado do tipo Tesfera para armazenar o endereço de memória da variável esfera

    float dist; //Variável declarada do tipo float para armazenar a distância entre o ponto e o centro da esfera, ambos digitados pelo usuário

    ptrP = &ponto; //O ponteiro ptrP recebe o endereço da variável ponto
    ptrE = &esfera; //O ponteiro ptrE recebe o endereço da variável esfera

    //Solicita as coordenadas do ponto para o usuário e faz a leitura
    printf("Digite as coordenadas do ponto:");
    printf("\nCoordenada x: ");
    scanf("%f", &ptrP->x);
    printf("Coordenada y: ");
    scanf("%f", &ptrP->y);

    //Solicita as coordenadas do centro da esfera para o usuário e faz a leitura
    printf("\nDigite as coordenadas do centro da esfera:");
    printf("\nCoordenada x: ");
    scanf("%f", &ptrE->centro.x);
    printf("Coordenada y: ");
    scanf("%f", &ptrE->centro.y);

    //Solicita o valor do raio da esfera para o usuário e faz a leitura
    printf("\nDigite o raio da esfera: ");
    scanf("%f", &ptrE->raio);

    //Calcula a distância entre o ponto e o centro da esfera
    dist = sqrt(((ptrP->x - ptrE->centro.x) * (ptrP->x - ptrE->centro.x)) + ((ptrP->y - ptrE->centro.y) * (ptrP->y - ptrE->centro.y)));

    //Verifica se o ponto está dentro ou fora da esfera e exibe o resultado
    if(dist < ptrE->raio){
        printf("\nO ponto eh interno a esfera.");
    }
    else{
        printf("\nO ponto eh externo a esfera.");
    }
    return 0;
}
