#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i2;
    int i;

    float NotasAlunos[4][2] = {

        {0 , 0},
        {0 , 0},
        {0 , 0},
        {0 , 0}

    };

    for(i2 = 0; i2 <= 3; i2++){


        for(i = 0; i <= 1; i++){


            printf("Digite as notas do aluno %d: ", i2 + 1);

            scanf("%f", &NotasAlunos[i2][i]);


        }
    }

    for(i2 = 0; i2 <= 3; i2++){

        printf("\nNotas do aluno %d: %.2f, %.2f\n", i2 + 1, NotasAlunos[i2][0], NotasAlunos[i2][1]);

        printf("\nMedias do aluno %d: %.2f\n",i2 + 1, (NotasAlunos[i2][0] + NotasAlunos[i2][1]) / 2);

    }

    return 0;

}
