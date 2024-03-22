#include <stdio.h>
#include <stdlib.h>

int main(void){
    int mat[4], *p, x;

    p = mat + 1; //expressão válida, recebe o ponteiro da primeira posição de mat e + 1;


    p = mat; //expressão válida, atribuição do ponteiro da primeira posição de mat


    p = mat; //expressão válida, atribuição do ponteiro da primeira posição de mat


    x = (*mat); //expressão válida atribuição do valor da primeira posição de mat

    return 0;
}