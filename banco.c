// programa que simula uma interface de conta bancaria.
#include<stdlib.h>
#include<stdio.h>

int main(){

    float soma=0, valor;
    int opcao;

    do{
        printf("\nDigite uma operação");
        printf("\n 1.Deposito");
        printf("\n 2.Saque");
        printf("\n 3.Saldo");
        printf("\n 4.Sair\n");
        printf("\n Qual a opcao? ");
        scanf("%d", &opcao);

    switch(opcao){
    
    case 1:
    printf("\n Valor do depósito? ");
    scanf("%f", &valor);
    soma=soma+valor;

    break;

    case 2:
    printf("\n Valor de saque? ");
    scanf("%f", &valor);
    soma=soma-valor;

    break;

    case 3:
    printf("\n Saldo atual= R$ %.2f", soma);

    break;

    default:

    if(opcao != 4)
    {
        printf("\n Opção inválida! \n");
    }
}   
    }while(opcao != 4);
printf("Fim das operações. \n\n");

return 0;
}