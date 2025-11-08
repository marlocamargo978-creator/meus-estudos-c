#include<stdio.h>
int main(){
    int total_disciplinas, limite_de_alunos = 100, total_alunos = 0;

    printf("SISTEMA DE CONTAGEM DE ALUNOS MATRICULADOS!!!\n");
     printf("Insira o número de disciplinas disponíveis: ");
     scanf("%d", &total_disciplinas);

     for(int i = 1; i <= total_disciplinas; i++){
        int alunos_matriculados;

        printf("Insira o número de alunos matriculados na disciplina %d: ", i);
        scanf("%d", &alunos_matriculados);
        //Verifica se o numero de alunos matriculados é válido

        if(alunos_matriculados < 0){
            printf("Número de alunos inválido. Tente novamente.\n");
            i--; //Volta para a mesma disciplina.
            continue; //Pula para a proxima iteraçao do loop.
        }

        total_alunos += alunos_matriculados;
        //Verifica se o limite de alunos foi atingido.
        if(total_alunos >= limite_de_alunos){
            printf("Limite de alunos atingido. Encerrando contagem de disciplinas.\n");

            break; //Encerra o loop de contagem de disciplinas.
        }
     }
     printf("Total de disciplinas contadas: %d\n", total_disciplinas);
     printf("Total de alunos matriculados: %d\n", total_alunos);

     return 0;
}