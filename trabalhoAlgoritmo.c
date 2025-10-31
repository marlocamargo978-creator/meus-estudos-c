#include <stdio.h>

int main(){
    //Declarando as variaveis no código.
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;

    //declarando as variaveis de +, -, *, / em float no caso de um numero ser decimal, usando media na divisao.
    float soma_total, subtracao, multiplicacao_total, media;

    // Pedindo ao usuario para inserir os numeros.
    printf("Por favor, digite um numero inteiro (sem virgula ou ponto): ");
    scanf("%d", &numero1);
    printf("Por favor, digite um numero inteiro (sem virgula ou ponto): ");
    scanf("%d", &numero2);
    printf("Por favor, digite um numero inteiro (sem virgula ou ponto): ");
    scanf("%d", &numero3);

    //Fazendo os calculos dos numeros inseridos pelo usuario.
    soma_total = numero1 + numero2  + numero3;
    subtracao = numero1 - numero2  - numero3;
    multiplicacao_total = numero1 * numero2 * numero3;
    media = (float) (numero1 + numero2 + numero3)/3;

    //Verificando qual é o numero maior, sendo que 0 é falso e 1 é verdadeiro.
    printf("\nNumero 1 é maior que o numero 2? %d", numero1>numero2);
    printf("\nNumero 2 é menor que o numero 3? %d", numero2<numero3);

    //Verificando se o numero1 é positivo e o numero2 é par e exibindo a msg de verdadeiro ou falso.
    int checagem = ((numero1 > 0) && (numero2 % 2 ==0));
    printf("\nO numero 1 é positivo e o numero 2 é par?(1=SIM, 0=NÃO) %d\n", checagem);

    return 0;
}