//Caso em que o codigo foi usado somente com a condicional if, no caso de digitar uma idade menor que 18 nao voltara nenhuma resposta no terminal.
#include <stdio.h>

int main(){

    float idade;

    printf("Digite sua idade: \n");
    scanf("%f", &idade);

    if(idade>=18)
    {

        printf("Você já pode tirar sua carteira de habilitação, você já é maior de idade");
    }

    return 0;
}