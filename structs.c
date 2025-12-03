#include<stdio.h>
#include<string.h>

struct Livro{
    char titulo[200];
    char autor[200];
    float preco;
};

int main(){
    struct Livro livro1;
//Inserimos os dados do livro1

    printf("Por favor, digite o titulo do livro: \n");
    fgets(livro1.titulo, 200, stdin);
    printf("Digite o nome do autor do livro: \n");
    fgets(livro1.autor, 200, stdin);

//Limpeza do enter(\n) imediatamente após a leitura.
    livro1.titulo[strcspn(livro1.titulo, "\n")] = 0;
    livro1.autor[strcspn(livro1.autor, "\n")] = 0;

    livro1.preco = 49.90;

//Imprimir na tela os dados do livro.
    printf("Titulo: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("O livro custa: R$ %.2f\n", livro1.preco);

    return 0;
}
