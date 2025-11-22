//Desafio: Escrever um programa que declare uma matriz de inteiros 3x3(3 linhas e 3 colunas)

#include<stdio.h>
int main(){
   int tabela[3][3];
   int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           printf("Digite um número: ", i, j);
           scanf("%d", &tabela[i][j]); 
        }
    }
    printf("\n--- Tabela 3x3 ---\n");
    printf("col1\tcol2\tcol3\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", tabela[i][j]);
        }
        printf("\n");
    }
    return 0;
}