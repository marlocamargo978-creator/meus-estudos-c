//Exemplo de codigo com continue.
#include<stdio.h>

int main(){

    for (int i = 1; i <= 20; i++){
        if (i % 2 == 0) {
            continue; //Pula iterações com números pares.
        }
        printf("%d\n", i);
    }
    return 0;
}