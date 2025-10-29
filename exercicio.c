#include <stdio.h>

int main(){
    float num1, num2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    media=(num1 + num2)/2;
    printf("media = %.2f\n", media);
    return 0;
}