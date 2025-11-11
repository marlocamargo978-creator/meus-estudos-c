#include<stdio.h>
int main(){
    int numero, soma = 0;

    while(1){
        printf("Por favor, digite um numero ou 0 para sair: ");
        scanf("%d", &numero);

        if(numero == 0){
            break;
        }
        if(numero < 0){
            printf("Numero negativo, tente novamente: \n");
            continue;
        }
        soma += numero;

    }
    printf("\nA soma de todos os numeros é %d\n", soma);

    return 0;
}