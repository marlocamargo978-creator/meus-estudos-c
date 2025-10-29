#include <stdio.h>

int main(){

    //Variaveis
    float precoVenda, valorImposto, valorDesconto, precoFinal;

    //Constantes
    const float taxaImposto = 0.1;
    const float descontoPadrao =0.5;

    //Entrada
    printf("Informe o preço da venda do produto: ");
    scanf("%f", &precoVenda);

    //Processamento
    valorImposto = precoVenda * taxaImposto;
    valorDesconto = precoVenda * descontoPadrao;
    precoFinal = precoVenda + valorImposto - valorDesconto;

    //Saida
    printf("O preço final do televisor é: R$ %.2f\n", precoFinal);

    return 0;


}