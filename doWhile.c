#include<stdio.h>

int main(){

    float metragem1=0, metragem2=0, resultado=0;
    int resp;

    do{

    printf("Cálculo de m²\n\n");

    printf("Digite a 1° metragem do terreno: ");
    scanf("%f", &metragem1);
    printf("\nDigite a 2° metragem do terreno: ");
    scanf("%f", &metragem2);

    resultado=(metragem1*metragem2);
    printf("\n\nTerreno tem: %.2f m²\n", resultado);

    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);
}
    while(resp == 1); //condiçao de saida

    return 0;
}