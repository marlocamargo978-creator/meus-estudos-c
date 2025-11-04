//Exemplo de codigo usando switch-case
#include <stdio.h>

 int main(){

    float salario, inss, ir, sal_liquido;

    printf("Calculo de salario liquido com desconto de IR e INSS\n\n");

    printf("\nDigite seu salario bruto:\n ");
    scanf("%f", &salario);
    
    //Calcular o INSS.

    if(salario<=1320)
     inss=salario*0.075;
    
    else if(salario>=1320 && salario<=2571.29)
     inss=salario*0.09;

    else if(salario>=2571.30 && salario<=3856.94)
     inss=salario*0.12;
     
    else if(salario>=3856.95 && salario<=7507.49)
     inss=salario*0.14;

    else
     inss=1051.04; //teto de contribuiçao

    //calcular o IR

    if(salario<=1903.98)
     ir=salario*0;

    else if(salario>=1903.99 && salario<=2826.65)
     ir=salario*0.075;
    
    else if(salario>=2826.66 && salario<=3751.05)
     ir=salario*015;

    else if(salario>=2826.66 && salario<=4664.68)
     ir=salario*0.225;

    else if(salario>4664.69)
     ir=salario*0275;

    //calculo do salario liquido

    sal_liquido=(salario-inss)-ir;

    //resultados

    printf("\nDesconto do INSS e : %.2f\n\n", inss);
    printf("Desconto do imposto de renda e: %.2f\n\n", ir);
    printf("Salário liquido: %.2f\n\n", sal_liquido);

    return 0;
}