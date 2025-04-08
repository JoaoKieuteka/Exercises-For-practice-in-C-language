#include <stdio.h>

float NumerosUsuario[2] = {0 , 0};

int Operacao;

float Subtracao(float a, float b){

    float resultado = a - b;

    printf("\nResultado da Subtracao: %.2f\n\n", resultado);

    return 0;

}

float Soma(float a, float b){

    float resultado = a + b;

    printf("\nResultado da soma: %.2f\n\n", resultado);

    return 0;

}

float Multiplicacao(float a, float b){

    float resultado = a * b;

    printf("\nResultado da Multiplicacao: %.2f\n\n", resultado);

    return 0;

}

float Divisao(float a, float b){

    float resultado = a / b;

    printf("\nResultado da Divisao: %.2f\n\n", resultado);

    return 0;

}

int Menu(){


Retorno:

    printf("Selecione a Operação da conta:\n(1 - Adicao) (2 - Subtracao) (3 - Multiplicacao) (4 - Divisao)\n\n");

    scanf("%d", &Operacao);

/*  if (!(Operacao == 1) && !(Operacao == 2) && !(Operacao == 3) && !(Operacao == 4))*/

    if (1 > Operacao || Operacao > 4){

        printf("\nSua operação e invalida!\n\n");

        goto Retorno;

    }

    return 0;

}

int EntradaNumeros(){


    for(int i = 0;i <= 1; i++){

        printf("\nDigite os dois numeros da conta: ");

        scanf("%f", &NumerosUsuario[i]);

    }

    return 0;

}

int main(){


    Menu();

    while(Operacao == 1 || Operacao == 2 || Operacao == 3 || Operacao == 4){

        EntradaNumeros();

        switch(Operacao){

            case 1:

                Soma(NumerosUsuario[0], NumerosUsuario[1]);
                break;

            case 2:

                Subtracao(NumerosUsuario[0], NumerosUsuario[1]);
                break;

            case 3:

                Multiplicacao(NumerosUsuario[0], NumerosUsuario[1]);
                break;

            case 4:

                Divisao(NumerosUsuario[0], NumerosUsuario[1]);
                break;

        }

        Menu();

    }

    return 0;

}
