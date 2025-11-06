// calculo da tabuada de 1 a 5 com for
#include<stdio.h>
int main(){
    int multi, num, resultado;

    for(multi=1; multi<=10; multi++){

    for(num=1; num<=10; num++)
    {
     printf("%d\t", num*multi);
    }
    printf("\n");
}
return 0;
}