//Criando um menu de jogo.
#include<stdio.h>
int main(){
    int escolha = 0;

    do{
        printf("\n--- MENU DO JOGO ---\t\n");
        printf("\n1. --NOVO JOGO--\n");
        printf("\n2. --CARREGARJOGO--\n");
        printf("\n3. --OPÇÕES--\n");
        printf("\n4. --SAIR--\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
            printf("...INICIANDO NOVO JOGO...\n");

            break;

            case 2:
            printf("...CARREGANDO JOGO SALVO...\n");

            break;

            case 3:
            printf("...EXIBINDO AS OPÇÕES DO JOGO...\n");

            break;

            case 4:
            printf("...SAINDO DO JOGO, OBRIGADO POR JOGAR...\n");

            break;

            default:
            printf("Opção invalida! Tente novamente.\n");

            break;

        }
    }while (escolha != 4);

    return 0;
}