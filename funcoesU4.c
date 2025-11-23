#include<stdio.h>

float calcular_salario_bruto(float valor_hora, float num_horas){
    return valor_hora * num_horas;
}
float calcular_desconto(float salario_bruto){
    return salario_bruto * 0.09;
}
float calcular_salario_liquido(float salario_bruto, float desconto){
    return salario_bruto - desconto;
}
int main(){

    float valor_hora, num_horas;
    float salario_bruto, desconto, salario_liquido;

    printf("Digite o valor que recebe por hora: R$ ");
    scanf("%f", &valor_hora);
    printf("Digite quantas horas foram trabalhadas: ");
    scanf("%f", &num_horas);

    salario_bruto = calcular_salario_bruto(valor_hora, num_horas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    printf("\n--- Folha de pagamento ---\n");
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%): R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}