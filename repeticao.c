// Programa em C que calcula a idade media de um grupo de pessoas.
// A finalizaçao da entrada de numeros é dada por 0.
// O programa nao deve aceitar idades negativas.
#include<stdio.h>

int main(){
    int idade, soma = 0, contPessoas = 0;

    while (1) {
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break; //Encerra o laço
        }

        if (idade < 0) {
            printf("Não existe idade negativa! Tente novamente...\n");
            continue;
        }

        soma += idade;
        contPessoas ++;
    }

    if (contPessoas > 0) {
        float media = (float) soma / contPessoas;
        printf("Média das idades: %.2f\n", media);
    }else {
        printf ("Nenhuma idade foi fornecida.\n");
    }

    return 0;
}