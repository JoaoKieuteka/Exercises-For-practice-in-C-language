#include<stdio.h>
#include<string.h>

int main()
{
    int i;

    int NumeroCadaVogal[5] = {0, 0, 0, 0, 0};

    int numeroVogais = 0;

    char TextoUsuario[100];

    printf("Digite um texto de no Maximo 100 caracteres:\n\n");

    fgets(TextoUsuario, 100, stdin);

    for(i = 0; i <= 99; i++){

        if(TextoUsuario[i] == 'a' || TextoUsuario[i] == 'A'){

            NumeroCadaVogal[0]++;
            numeroVogais++;

        }else if(TextoUsuario[i] == 'e' || TextoUsuario[i] == 'E'){

            NumeroCadaVogal[1]++;
            numeroVogais++;

        }else if(TextoUsuario[i] == 'i' || TextoUsuario[i] == 'I'){

            NumeroCadaVogal[2]++;
            numeroVogais++;

        }else if(TextoUsuario[i] == 'o' || TextoUsuario[i] == 'O'){

            NumeroCadaVogal[3]++;
            numeroVogais++;

        }else if(TextoUsuario[i] == 'u' || TextoUsuario[i] == 'U'){

            NumeroCadaVogal[4]++;
            numeroVogais++;

        }
    }

    printf("\n%d vogais aparecerem no seu texto!\n\nDas quais: \n", numeroVogais);
    printf("%d Sao letras 'a'. \n", NumeroCadaVogal[0]);
    printf("%d Sao letras 'e'. \n", NumeroCadaVogal[1]);
    printf("%d Sao letras 'i'. \n", NumeroCadaVogal[2]);
    printf("%d Sao letras 'o'. \n", NumeroCadaVogal[3]);
    printf("%d Sao letras 'u'. \n", NumeroCadaVogal[4]);

    return 0;

}
