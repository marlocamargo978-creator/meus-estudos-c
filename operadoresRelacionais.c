#include<stdio.h>

int main(){

    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("\n n1 é igual a n2? %d", n1==n2);
    printf("\n n1 é maior que n2? %d", n1>n2);
    printf("\n n1 é menor que n2? %d", n1<n2);
    printf("\n n1 é diferente de n2? %d", n1!=n2);
    printf("\n n1 é maior ou igual a n2? %d", n1>=n2);
    printf("\n n1 é menor ou igual a n2? %d\n", n1<=n2);

    return 0;

}