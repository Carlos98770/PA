#include <stdio.h>
#include <stdlib.h>

/*
    Ponteiros para funções:
        são ponteiros capazes de armazenar o endereço de um bloco de código, este codigo é a função declarada

*/
int soma(int a, int b){
    return (a+b);        // Declarando a função soma
}
int main(void){

    int (*pf) (int,int); // Um ponteiro para uma função que tem dois paramentros ints e retorna um valor int
    pf = &soma; // fazendo o ponteiro para função receber o endereço da função soma

    printf("%d \n" , pf(3,6));  // fazendo a impressão

    return 0;
}