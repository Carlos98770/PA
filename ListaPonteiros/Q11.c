#include <stdlib.h>
#include <stdio.h>

int main(){

    /*
    ◦ x for declarado como char?
        x[0] = 4092 // char ocupando 1 byte
        x + 1 = 4093
        x + 2 = 4094
        x + 3 = 4095

    ◦ x for declarado como int?
        x[0] = 4092 // int ocupando 2 bytes
        x + 1 = 4094
        x + 2 = 4096
        x + 3 = 4098


    ◦ x for declarado como float?
        x[0] = 4092 // float ocupando 4 bytes
        x + 1 = 4096
        x + 2 = 4100
        x + 3 = 4104


    ◦ x for declarado como double?
        x[0] = 4092 // double ocupando 8 bytes
        x + 1 = 4100
        x + 2 = 4108
        x + 3 = 4116
    
    */

    char chr[4];
    char *p;

    p = &chr;

    printf("Vetor de CHAR: \n");
    printf("%p " , p);
    printf("%p " , p + 1);
    printf("%p " , p + 2);
    printf("%p \n" , p + 3);

    int inteiro[4];
    int *pi;

    pi = &inteiro;

    printf("Vetor de INTEIROS: \n");
    printf("%p " , pi);
    printf("%p " , pi + 1);
    printf("%p " , pi + 2);
    printf("%p \n" , pi + 3);

    float real[4];
    float *pr;

    pr = &real;

    printf("Vetor de FLOATS: \n");
    printf("%p " , pr);
    printf("%p " , pr + 1);
    printf("%p " , pr + 2);
    printf("%p \n" , pr + 3);

    double dbl[4];
    double *pl;

    pl = &dbl;

    printf("Vetor de DOUBLES: \n");
    printf("%p " , pl);
    printf("%p " , pl + 1);
    printf("%p " , pl + 2);
    printf("%p \n" , pl + 3);


    /*
    Vetor de CHAR: 
        0x7fff37a6f414 0x7fff37a6f415 0x7fff37a6f416 0x7fff37a6f417 
    Vetor de INTEIROS: 
        0x7fff37a6f3d0 0x7fff37a6f3d4 0x7fff37a6f3d8 0x7fff37a6f3dc 
    Vetor de FLOATS: 
        0x7fff37a6f3e0 0x7fff37a6f3e4 0x7fff37a6f3e8 0x7fff37a6f3ec 
    Vetor de DOUBLES: 
        0x7fff37a6f3f0 0x7fff37a6f3f8 0x7fff37a6f400 0x7fff37a6f408 
    
    
    */



    return 0;
}