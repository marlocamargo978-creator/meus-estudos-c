#include<stdio.h>
int main(){
    char cpf1[15]; //Vetor cpf formatado com pontos e traço
    char cpf2[12] = ""; //Vetor cpf sem formatação, inicializado como vazio.
    int i = 0, n = 0;

    printf("Digite seu cpf na forma NNN.NNN.NNN-NN:\n");
    scanf("%s", cpf1);

    //Laço para percorrer todo o vetor cpf1
    //Remover todos os pontos e traços e armazenar apenas os digitos

    for(i = 0; i < 14; i++){
        if(cpf1[i] == '.' || cpf1[i] == '-'){
            continue;//ignora pontos e traços
        }else{
            //armazena apenas os digitos em cpf2
            cpf2[n] = cpf1[1];
            n++; //controla o tamanho do cpf2
        }
    }
    cpf2[n] = '\0';
    //Imprime o cpf formatado sem pontos e traços
    printf("\n\nCPF formatado = %s\n", cpf2);

    return 0;
}