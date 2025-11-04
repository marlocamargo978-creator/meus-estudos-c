// tabuada de qualquer numero utizando a repetiçao com while
#include<stdio.h>

int main(){

    int multiplicador=0, resultado, num;

    printf("Tabuada de qual numero: ");
    scanf("%d", &num);
    
    while(multiplicador<=10)
    {
        resultado=num*multiplicador;
        printf("%d\n", resultado);

        multiplicador=multiplicador+1;
    }
    return 0;
}