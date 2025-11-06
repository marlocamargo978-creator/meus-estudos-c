// exemplo de codigo de estrutura condicional composta
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    unsigned long long fatorial = 1;// Usamos unsigned lon long para armazenar numeros grandes.

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    //Verificação para numeros negativos.

    if(n < 0){
        printf("O fatorial não está definido para números negativos.\n");
    }else{
        for(int i = 1; i <= n; i++){
            fatorial*=i;
        }
        printf("O fatorial de %d é %d llu\n", n, fatorial);
    }

    return 0;
}