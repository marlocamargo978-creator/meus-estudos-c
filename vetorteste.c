#include<stdio.h>
int main(){
    float notas[4];
    int i;

    printf("---DIGITE AS 4 NOTAS---\n");

    for(i = 0; i < 4; i ++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    float soma = 0;

    for(i = 0; i < 4; i ++){
        soma += notas[i];
    }
    float media;
    media = soma / 4.0;

    printf("\nA média total das 4 notas é %.2f\n", media);

    return 0;
}