#include <stdio.h>
#include <stdlib.h>

int main()
{

    int NumeroFixo = rand();
    int NumeroUsuario;


    printf("Advinhe o Numero que estou pensando!\nEscolha um Numero: ");
    scanf("%d", &NumeroUsuario);

    while(NumeroUsuario!= NumeroFixo){

        if(NumeroUsuario > NumeroFixo){

            printf("Seu numero esta acima, tente novamente: ");
            scanf("%d", &NumeroUsuario);

            continue;

        }

        printf("Seu numero esta abaixo, tente novamente: ");
        scanf("%d", &NumeroUsuario);

    }

    printf("Parabens! voce advinhou o numero! ");

    return 0;

}
