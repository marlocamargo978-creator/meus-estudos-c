#include<stdio.h>
#include<stdlib.h>//para limpar tela
//Funçao para limpar tela
void limpar_tela(){
    #ifdef _win32
    system("cls");
    #else
    system("clear");
    #endif
}

int main(){
    char nomes[4][200];//Para guardar 4 nomes e ate 200 caracteres cada nome
    float nota_1[4];
    float nota_2[4];
    int i;
    float medias[4];//Para guardar 4 medias

    for(i = 0; i < 4; i ++){
        limpar_tela();
        printf("-- Aluno %d --\n", i + 1);

        printf("Nome do aluno: ", nomes);
        scanf("%s", nomes[i]);

        printf("Digite a 1° nota: ", nota_1);
        scanf("%f", &nota_1[i]);

        printf("Digite a 2° nota: ", nota_2);
        scanf("%f", &nota_2[i]);

        medias[i] = (nota_1[i]+ nota_2[i])/ 2;
        printf("A media de todas as notas é de: %.2f\n", medias[i]);
    }
            limpar_tela();
            printf("\t--LISTA DE ALUNOS--\n\n");
        for(i = 0; i < 4; i ++){
            printf("Aluno:%s \tMédia: %.2f\n\n", nomes[i], medias[i]);
        }
        printf("\n\t--FIM DO PROGRAMA--\n\n");  

    return 0;

}