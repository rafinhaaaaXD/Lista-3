#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Tponto com as coordenadas x, y e z
typedef struct{
    float x, y, z; //Variáveis declaradas para armazenar as coordenadas x, y e z de um ponto
}Tponto;

int main() {
    float A, B, C, D; //Variáveis declaradas do tipo float para armazenar os coeficientes de um plano

    Tponto ponto, //Variável do tipo Tponto declarada para armazenar as coordenadas
    *ptrPonto; //Ponteiro do tipo Tponto declarado para armazenar o endereço de memória da variável ponto

    ptrPonto = &ponto; //Apontando o ponteiro para a variável "ponto"

    //Solicita os coeficientes para o usuário e faz a leitura
    printf("Digite os coeficientes do plano Ax + By + Cz = D.\n");
    printf("Coeficiente A: ");
    scanf("%f", &A);
    printf("Coeficiente B: ");
    scanf("%f", &B);
    printf("Coeficiente C: ");
    scanf("%f", &C);
    printf("Coeficiente D: ");
    scanf("%f", &D);

    //Solicita as coordenadas para o usuário e faz a leitura
    printf("\nDigite as coordenadas do ponto.\n");
    printf("Coordenada x: ");
    scanf("%f", &ptrPonto->x);
    printf("Coordenada y: ");
    scanf("%f", &ptrPonto->y);
    printf("Coordenada z: ");
    scanf("%f", &ptrPonto->z);

    //Verifica se o ponto pertence ao plano ou não e exibe a mensagem correspondente
    if ((A * ptrPonto->x + B * ptrPonto->y + C * ptrPonto->z) == D) {
        printf("\nO ponto (%.2f, %.2f, %.2f) pertence ao plano.\n", ptrPonto->x, ptrPonto->y, ptrPonto->z);
    } else {
        printf("\nO ponto (%.2f, %.2f, %.2f) nao pertence ao plano.\n", ptrPonto->x, ptrPonto->y, ptrPonto->z);
    }

    return 0;
}
