//Calculador de bonus.
#include<stdio.h>
int main(){
    float salario = 0, bonus = 0, novo_salario = 0;

    printf("Digite qual o seu salario: R$");
    scanf("%f", &salario);

    if(salario <= 2000){
        bonus = salario*0.10;
    }
    else if(salario <= 4000){
        bonus = salario*0.07;
    }
    else{
        bonus = salario*0.05;
    }

    novo_salario = salario + bonus;
    printf("Seu salário com bonus é de R$%.2f\n", novo_salario);

    return 0;
}