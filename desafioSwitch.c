#include<stdio.h>
int main(){
    int mes = 0;
    do{
    printf("Digite um mês (1 a 12) ou 0 para sair: ");
    scanf("%d", &mes);

    //Trimestre 1.
    switch(mes){
        case 1:
        case 2:
        case 3:
        printf("O mês %d pertence ao 1° trimestre.\n", mes);

        break;

    //Trimestre 2.
        case 4:
        case 5:
        case 6:
        printf("O mês %d pertence ao 2° trimestre.\n", mes);

        break;
    
    //Trimestre 3.
        case 7:
        case 8:
        case 9:
        printf("O mes %d pertence ao 3° trimestre.\n", mes);

        break;

    //Trimestre 4.
        case 10:
        case 11:
        case 12:
        printf("O mês %d pertence ao 4° trimestre.\n", mes);

        break;

        case 0:
        printf("Saindo do programa...\n");

        break;

        default:

        printf("Opção inválida, tente novamente!!!\n");

        break;
    }
}while(mes != 0);

    return 0;
}