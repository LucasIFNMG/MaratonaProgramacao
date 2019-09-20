//@author LucasIFNMG

/* Um jogo de Caça Palavras pode ser representado por uma matriz, sendo que cada posição da matriz pode corresponder a um quadrado do jogo. Zero pode indicar quadrado branco
e -1 pode indicar um quadrado preto.
Dada uma matriz de tamanho mínimo 2x2, verifique as posições que dão início às palavras (Verticais e Horizontais). Considere que uma palavra deve ter no mínimo duas letras

Entrada
Os 2 primeiros números inteiros sendo n (n >= 2) e m(m >= 2) correspondem à quantidade de linhas e colunas
*/

//TODO  : BP L109 ?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int L , C;

    //scanf(" %d %d",&L, &C);
    L = 5, C = 8;
    int M[L][C];

    for(L = 0; L < 5; L++)
    {
        for(C = 0; C< 8; C++)
        {
            M[L][C] = rand()%9 + 1;
        }
    }

    M[1][2] = 0;
    M[1][3] = 0;
    M[1][6] = 0;
    M[1][7] = 0;

    M[2][1] = 0;
    M[2][5] = 0;
    M[2][7] = 0;
    
    M[3][2] = 0; 
    M[3][4] = 0;
    M[3][7] = 0;

    M[4][1] = 0;
    M[4][4] = 0;
    M[4][5] = 0;
    
    for(L = 0; L < 5; L++)
    {
        printf("\n");
        for(C = 0; C< 8; C++)
        {
            printf("%d ",M[L][C]);
        }
    }

    int contPalavra = 0;
    int letraConsec = 0;


    //Palavras na Horizontal
    for(L = 0; L < 5; L++)
    {
        letraConsec = 0;
        printf("\nLinha %d: %d Palavras\n--------------------\n", L, contPalavra);
        for(C = 0; C< 7; C++)
        {
            if(M[L][C] != 0)
            {
                
                if(M[L][C+1] != 0)
                {
                    letraConsec++;
                    if( C+1 == 7 && letraConsec >=2)
                        contPalavra++;
                }
                
                else
                {
                    if(letraConsec >= 1)
                        contPalavra++;
                    letraConsec = 0;
                    
                }
                
            }
        }
    }
    int contPalavraH = contPalavra;
    printf("\n%d Palavras HORIZONTAL\n--------------------\n",contPalavraH);



    //Palavras na Vertical
    for(C = 0; C < 8; C++)
    {
        letraConsec = 0;
        printf("\nColuna %d : %d Palavras\n--------------------\n", C, contPalavra);
        for(L = 0; L< 4; L++)
        {
            if(M[C][L] != 0)
            {
                if(M[C][L+1] != 0)
                {
                    letraConsec++;
                    if( L+1 == 4 && letraConsec >=2)
                        contPalavra++;
                }
                else
                {
                    if(letraConsec >= 1)
                        contPalavra++;
                    letraConsec = 0;                      
                }
            }
            
        }
    }

    printf("\n%d Palavras VERTICAL\n",contPalavra - contPalavraH);
    printf("\n%d Palavras",contPalavra);

}