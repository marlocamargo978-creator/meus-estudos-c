//Exemplo de codigo com break.
#include<stdio.h>

int main(){
    int numero_secreto = 7;
    int tentativa;

    printf("Adivinhe o numero secreto!\n");

    while(1) {//Causa um loop infinito.
     printf("Insira um numero: ");
     scanf("%d", &tentativa);
     
     if (tentativa == numero_secreto){

        printf ("Parabéns! Você adivinhou o número secreto.\n");

        break; //Sai do loop quando o numero correto é adivinhado.
     }else{
        printf("Tente novamente!\n");
     }
    }
    return 0;
}