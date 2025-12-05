#include<stdio.h>
#include<string.h>

struct Torcedor
{
    char nome[200];
    int idade;
    int tipo_socio; //1 = Avanti, 2 = comum.
    float valor_final;
};
int main()
{
    struct Torcedor t1;

        printf("--- BILHETERIA ALLIANZ PARQUE ---\n");
        //Colocando o nome do socio torcedor.
        printf("\tNome do torcedor: ");
        fgets(t1.nome, 200, stdin);
        t1.nome[strcspn(t1.nome, "\n")] = 0;

        //Coletando a idade e tipo.
        printf("\tIdade: ");
        scanf("%d", &t1.idade);

        printf("\tTipo de sócio (1-Avanti / 2-Comum): ");
        scanf("%d", &t1.tipo_socio);

        //Lógica do preço.
        if(t1.tipo_socio == 1)
        {
            printf("Sócio Avanti! Desconto aplicado. \n");
            t1.valor_final = 60;
        }
        else
        {
            printf("Tocedor comum: \n");
            t1.valor_final = 120;
        }
    //Imprimindo na tela os dados do torcedor.
    printf("--- INGRESSO EMITIDO PARA ---\n");
    printf("\tNome: %s\n", t1.nome);
    printf("\tIdade: %d anos\n", t1.idade);
    printf("\tValor a pagar: R$ %.2f\n", t1.valor_final);

    return 0;
}

