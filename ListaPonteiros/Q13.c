#include <stdio.h>
#include <stdlib.h>

//memory leak é um problema comum em C, já que a linguaguem não tem um coletor de lixo
//este problema é quando se faz uma alocação dinâmica de memoria e não se apaga ela


//double free
//esquecer de adicionar o free
//esquecer de adicionar em uma função


int main(){

    //Exemplo 1
    int *x;
    x = (int *) malloc( 4 *sizeof(int));
    //Faço a Declaração do ponteiro, Aloca a memoria para ele, e não faço a liberação do free(x)

    //Exemplo 2
    int *x;
    x = (int *) malloc( 4 *sizeof(int));
    x = (int *) malloc( 8 *sizeof(int));
    //Faço a reatribução de um ponteiro, para alocar mais memoria e não libero a anterior


    //Exemplo 3
    int *x;
    while(1){
        x = (int *) malloc( 4 *sizeof(int));
        //Faço uma alocação dentro de um loop e nao coloco o free(x)

    }


    return 0;
}