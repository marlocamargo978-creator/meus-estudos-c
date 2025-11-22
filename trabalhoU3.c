#include<stdio.h>

int main(){
    int vendas[5];
    int soma = 0;
    int i;
// Entrada dos dados
    printf("\n--- Lançamento de vendas ---\n");

    for(i = 0; i < 5; i ++){
        printf("Digite as vendas do dia: ", i + 1);
        scanf("%d", &vendas[i]);//Usando o [i] para guardar na posição certa.
    }
    //Pocessamento e saida.
    printf("\n--- Relatório final ---\n");

    for(i = 0; i < 5; i ++){
        //Somando o valor atual do acumulador
        soma += vendas[i];

        printf("Dia %d: %d vendas\n", i + 1, vendas[i]);
    }
    printf("\nTotal geral das vendas: %d\n", soma);

    return 0;
}