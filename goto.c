#include<stdio.h>
int main(){
    int numero;

    printf("Insira um número positivo:");
    scanf("%d", &numero);

    if(numero <= 0){

        goto erro;//Vai para o rotulo erro, se o numero nao for positivo.
    }

    printf("Número válido: %d\n", numero);

    return 0;

    erro: //Rótulo para manipular o erro.
    printf("Erro: Número invalido.\n");

    return 0;
}