#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livros{

    char NomeLivros[50];

    char NomeAutor[50];

    int numeroPaginas;

};

struct Livros LivrosRegistrados[3];

int main()
{

    RegistroLivros();

    MostrarDados();

    OrdernacaoVetor();

// Impressão dos dados do livro com maior número de páginas:

    printf("\n\nO seu Livro com maior numero de paginas e: %d\n\n\nO nome do livro e: %s\n\n", LivrosRegistrados[2].numeroPaginas, LivrosRegistrados[2].NomeLivros);

    printf("O autor do livro e: %s", LivrosRegistrados[2].NomeAutor);

    return 0;

}

int RegistroLivros(){

    for(int i = 0; i <= 2; i++){

        printf("Digite o nome do Livro %d: ", i + 1);

        fgets(LivrosRegistrados[i].NomeLivros,50,stdin);

        printf("\nDigite o nome do autor do Livro %d: ", i+ 1);

        fgets(LivrosRegistrados[i].NomeAutor,50,stdin);

        printf("\nDigite a quantidade de paginas do Livro %d: ", i+ 1);

        scanf("%d", &LivrosRegistrados[i].numeroPaginas);

        fflush(stdin);

        printf("\n");

    }

    return 0;

}

int OrdernacaoVetor(){

    int alteracoes = 1;

    int Temporario = 0;

    char TemporarioNomeLivro[50];

    char temporarioNomeAutor[50];

    while(alteracoes > 0){

        alteracoes = 0;

        for(int i = 0; i < 2; i ++){

            if(LivrosRegistrados[i].numeroPaginas > LivrosRegistrados[i + 1].numeroPaginas){

                Temporario = LivrosRegistrados[i].numeroPaginas;

                LivrosRegistrados[i].numeroPaginas = LivrosRegistrados[i + 1].numeroPaginas;

                LivrosRegistrados[i + 1].numeroPaginas = Temporario;

// Ordenação dos Nomes dos Livros:

                strcpy(TemporarioNomeLivro, LivrosRegistrados[i].NomeLivros);

                strcpy(LivrosRegistrados[i].NomeLivros, LivrosRegistrados[i + 1].NomeLivros);

                strcpy(LivrosRegistrados[i + 1].NomeLivros, TemporarioNomeLivro);

// Ordenação dos Nomes dos autores dos Livros:

                strcpy(temporarioNomeAutor, LivrosRegistrados[i].NomeAutor);

                strcpy(LivrosRegistrados[i].NomeAutor, LivrosRegistrados[i + 1].NomeAutor);

                strcpy(LivrosRegistrados[i + 1].NomeAutor, temporarioNomeAutor);

                alteracoes = alteracoes + 1;
            }
        }
    }

    return 0;
}

int MostrarDados(){


    printf("-------------------------------------------------------------------------------");

    for(int i = 0; i <= 2; i++){

        printf("\n\nNome do livro %d: %s\n\nNome do autor do livro: %s\n\n", i + 1, LivrosRegistrados[i].NomeLivros, LivrosRegistrados[i].NomeAutor);

        printf("Numero de Paginas: %d\n\n", LivrosRegistrados[i].numeroPaginas);

        printf("-------------------------------------------------------------------------------");

    }

    return 0;

}
