#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Outra forma de alocação de matrizes


/*
https://www.inf.ufpr.br/roberto/ci067/14_alocmat.html
*/


void prencherMatriz(int **x , int nl, int nc){
    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++)
            x[i][j] = i+(j+2);

}


void imprimirMatriz(int **x , int nl, int nc){
    for(int i = 0; i < nl; i++){
        for(int j = 0; j < nc; j++){
            printf("%d " , x[i][j]);

        }
        printf("\n");
    }

}
void liberarMatriz(int **x){
    free(x[0]);
    free(x);

}
void copia(int **x, int **y,int nl,int nc){
    memcpy(y[0],x[0], nl*nc*sizeof(int));

}




int main()
{
    int nl = 5, nc = 4;
    int **x,**y;
    //alocar array auxiliar;
    y = (int **) malloc(nl * sizeof(int *));
    //aloca o blocos de elementos da matriz
    y[0] = (int *) malloc(nl * nc * sizeof(int));

    //fixar os ponteiros para linhas
    for(int i = 1; i < nl; i++)
        y[i] = y[i-1] + nc;



    //alocar array auxiliar;
    x = (int **) malloc(nl * sizeof(int *));
    //aloca o blocos de elementos da matriz
    x[0] = (int *) malloc(nl * nc * sizeof(int));

    //fixar os ponteiros para linhas
    for(int i = 1; i < nl; i++)
        x[i] = x[i-1] + nc;


    prencherMatriz(x,nl,nc);
    x[0][14] = -1;
    copia(x,y,nl,nc);

    imprimirMatriz(y,nl,nc);
    liberarMatriz(x);
    liberarMatriz(y);







    return 0;
}
