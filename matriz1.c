#include<stdio.h>
int main(){
    float notas[3][2];

    //aluno 1
    notas[0][0] = 9.5;
    notas[0][1] = 10;

    //aluno 2
    notas[1][0] = 4.5;
    notas[1][1] = 6.2;

    //aluno 3
    notas[2][0] = 7;
    notas[2][1] = 8.5;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){

            printf("Digite a nota do aluno %d:", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
    }
 
    return 0;
}