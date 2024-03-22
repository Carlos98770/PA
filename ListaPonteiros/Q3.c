#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 3, j = 2;
    int *p,*q;

    p = &i; // expressão válida

    *q = &j; // expressão inválida, pois está tendo atribuir o valor de *p que int a um endereço de memoria

    p = &*&i; // expressão válida

    i = *&j; // o certo seria *&j, não pode haver os ()

    i = *&j; // expressão válida

    i = *&*&j; // expressão válida

    q = *p; // expressao inválida,não se pode atribuir um valor a um ponteiro

    i = (*p)++ + *q; // expressão válida

    return 0;
}