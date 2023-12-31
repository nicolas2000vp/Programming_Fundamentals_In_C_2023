#include <stdio.h>

/*=================*/

#define N 6

#define CONTEUDO_TABULEIRO {{0,0,1,0,0,0}, {1,9,9,9,9,9}, {0,9,9,9,9,9}, {0,9,9,9,9,9}, {1,9,9,9,9,9}, {1,9,9,9,9,9}}

/*=================*/

int main()
{
    int tabuleiro[N][N] = CONTEUDO_TABULEIRO,
        i, j;

    for(i = 1; i < N; i++)
    {
        for(j = 1; j < N; j++)
        {
            if(tabuleiro[i-1][j-1] + tabuleiro[i-1][j] + tabuleiro[i][j-1] >= 2)
                tabuleiro[i][j] = 0;
            else
                tabuleiro[i][j] = 1;
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}
