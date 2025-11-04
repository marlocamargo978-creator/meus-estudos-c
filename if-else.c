// nesse exemplo ja utiliza o if junto com o else.
#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("\nO número é positivo\n");
    }

    else
    {
        printf("\nO número é negativo\n");
    }

    return 0;

}