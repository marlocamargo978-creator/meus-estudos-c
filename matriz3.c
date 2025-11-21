#include<stdio.h>
#define num_alunos 3
#define num_disciplinas 3

int main(){
    float notas[num_alunos][num_disciplinas] = {{7.5, 8.0, 9.0},{6.5, 7.0, 8.0}, {8.0, 7.5, 8.5}};

    float mediasAluno[num_alunos];
    float mediaGeral, soma = 0;

    //Calcula a media das notas de cada aluno em cada disciplina

for(int i=0; i<num_disciplinas; i++){
    float soma = 0;
    for(int j=0; j<num_disciplinas; j++){
        soma += notas[i][j];
    }
    mediasAluno[i] = soma/num_disciplinas;
}   
//Calcula a media geral de cada aluno em todas as disciplinas

for(int i=0; i<num_alunos; i++){
    soma += mediasAluno[i];
}
mediaGeral = soma/num_alunos;

//Imprime as medias de cada aluno em cada disciplina
for(int i=0; i<num_alunos; i++){
    printf("Média do aluno %d: %.2f\n", i+1, mediasAluno[i]);
}
//Imprime a media geral de todos os alunos
printf("Média geral de todos os alunos; %.2f\n", mediaGeral);

return 0;
}
