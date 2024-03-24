#include <stdio.h>
#include <stdlib.h>

int main(){

    int const *x = 3;
    printf("%d", ++(*x));


    /*
     A saida do progama será um erro de compilação, pois há uma atribuição de um valor para um ponteiro
     e no printf está tentando modificar o valor de uma variavel declarada const
    
    
    
    */


    return 0;
}