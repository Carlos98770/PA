
#include <stdio.h>
#include <stdlib.h>
    //https://agostinhobritojr.github.io/
    //Aloca��o dinaminca de matrizes
                    //Aloca��o
    //1 passo: alocar o array auxiliar de ponteiros;
    //2 passo: alocar cada uma das linhas e guardar seus endere�os no array auxiliar;

                    //libera��o
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


int **alocarMatriz(int nl, int nc){
    //aloca linhas da matriz
    int **x = malloc(nl * sizeof(int*));

    for(int i =0; i < nl; i++ )
        //aloca colunas da matriz
        x[i] = malloc(nc * sizeof(int));

    return x;
}


void liberarMatriz(int **x , int nl){
    for(int i = 0; i < nl; i++){
        //liberar colunas da matriz
        free(x[i]);
        
    }

    //liberar array auxiliar
    free(x);
}





typedef struct Matriz{
    int **x;

    int **(*alocarMatriz)(int nl, int nc);
    void (*prencherMatriz)(int **x , int nl, int nc);
    void (*imprimirMatriz)(int **x , int nl, int nc);
    

}Matriz;








int main()
{   
    Matriz A;
    int nl = 3, nc = 3;
    A.alocarMatriz = alocarMatriz;
    A.prencherMatriz = prencherMatriz;
    A.imprimirMatriz = imprimirMatriz;

    A.alocarMatriz(nl,nc);
    A.prencherMatriz(A.x,nl,nc);
    A.imprimirMatriz(A.x,nl,nc);



    /*
    int **x;
    int nl = 4;
    int nc = 5;

    
    x = alocarMatriz(nl,nc);

    prencherMatriz(x, nl,nc);
    imprimirMatriz(x,nl,nc);
    liberarMatriz(x,nl);
    */
  

    


    return 0;
    
}
