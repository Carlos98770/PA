#include <stdio.h>
#include <stdlib.h>
    //https://agostinhobritojr.github.io/
    //Alocação dinaminca de matrizes
                    //Alocação
    //1 passo: alocar o array auxiliar de ponteiros;
    //2 passo: alocar cada uma das linhas e guardar seus endereços no array auxiliar;

                    //liberação
    //1 passo: liberar os arrays das linhas;
    //2 passo: liberar o array auxiliar;


void prencherMatriz(int **x , int nl, int nc){
    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++)
            x[i][j] = i+j;

}

void imprimirMatriz(int **x , int nl, int nc){
    for(int i = 0; i < nl; i++){
        for(int j = 0; j < nc; j++){
            printf("%d " , x[i][j]);

        }
        printf("\n");
    }

}
/*
void alocarMatriz(int **x, int nl, int nc){
    x = malloc(nl * sizeof(int));

    for(int i =0; i < nl; i++ )
        //aloca linhas da matriz
        x[i] = malloc(nc * sizeof(int));


}
*/
int main()
{
    int **x;
    int nl = 4;
    int nc = 5;
    int **y;




    y = malloc(nl * sizeof(int));

    for(int i =0; i < nl; i++ )
        //aloca linhas da matriz
        y[i] = malloc(nc * sizeof(int));



    // array auxiliar;
    x = malloc(nl * sizeof(int));

    for(int i =0; i < nl; i++ )
        //aloca linhas da matriz
        x[i] = malloc(nc * sizeof(int));

    prencherMatriz(x, nl,nc);
    imprimirMatriz(x,nl,nc);

    //copiar valores da matriz x para y
    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++)
            y[i][j] = x[i][j];


    imprimirMatriz(y,nl,nc);




    for(int i = 0; i < nc; i++)
        //liberar linhas da matriz
        free(x[i]);

    for(int i = 0; i < nc; i++)
        //liberar linhas da matriz
        free(y[i]);

    //liberar array auxiliar
    free(x);
    free(y);


    return 0;
}
