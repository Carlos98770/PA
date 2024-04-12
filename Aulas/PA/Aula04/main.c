#include <stdio.h>
#include <stdlib.h>
// Função relloc: redemensionamento do tamanho do vetor, não apaga a memoria antiga, ela realoca para outro bloco de memoria
void prencherVetor(int *x, int n){
    for(int i = 0; i < n; i++)
        x[i] = i;
}

void imprimirVetor(int *x, int n){
    for(int i = 0; i < n; i++)
        printf("%d " , x[i]);

}


int * myrealloc(int *src, int oldsize, int newsize){
    int *x;
    x = (int*) malloc( newsize * sizeof(int));

    if( oldsize == newsize)
        return src;

    if ( oldsize > newsize)
        for( int i = 0; i < newsize; i++)
            //x[i] = src[i];
            memcpy(x, src, newsize * sizeof(int));

    else{
        for(int i = 0; i < newsize; i++){
            if( i < oldsize )
                //x[i] = src[i];
                 memcpy(x, src, oldsize * sizeof(int));
                //memcpy(destino, chegada, tamanho *sizeof(tipo de dado));
            else
                x[i] = 0;
        }
    }

    free(src);
    return x;

}




int main()
{
    int *x,n = 4;
    x = (int*) malloc( n * sizeof(int));

    prencherVetor(x,n);
    imprimirVetor(x,n);


    printf("\n");
    int b = 6;
    x = myrealloc(x,n,b);



    imprimirVetor(x,b);



    free(x);

    return 0;
}
