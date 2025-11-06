// Este programa solicita ao usuario o numero de linhas desejado para o trinagulo e, em seguida, usa dois 
//loops for para imprimir o triangulo na tela. O primeiro for interno gerencia a quantidade de espaços em branco que devem ser impressos, 
//ao passo que o segundo imprime os asteriscos.
#include<stdio.h>
int main(){

    int linhas, espacos, asteriscos;

    printf("Digite o numero de linhas do triangulo: ");
    scanf("%d", &linhas);

    for(int i=1; i<=linhas; i++){
        for(espacos=1; espacos<=linhas -i; espacos++){
            printf("");
        }
        for(asteriscos=1; asteriscos<=2*i-1; asteriscos++){
            printf("*");
        }
        printf("\n");
        }
    return 0;
}
