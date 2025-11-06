/*Escreva um algoritmo que receba dois valores x e z que calcula e retorna x
^z (sem utilizar funçoes ou operadores de potencia prontos). */

#include<stdio.h>

int main(){
    int x, z;
    long int res = 1;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de z: ");
    scanf("%d", &z);

    for(int i = 0; i < z; i++){
        res=res*x;
    }

    printf("%d elevado a %d é igual a %ld\n", x, z, res);

    return 0;
}