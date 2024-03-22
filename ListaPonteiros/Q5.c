#include <stdio.h>

int main(void) {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    
    printf("contador/valor/valor/endereco/endereco\n");
    
    for (i = 0; i <= 4; i++) {
        printf("i = %d", i);
        /*
        0- interação : i = 0;
        1- interação : i = 1;
        2- interação : i = 2;
        3- interação : i = 3;
        4- interação : i = 4;

        */

        printf(" vet[%d] = %.1f", i, vet[i]);
        /*
        0- interação : vet[0] = 1.1;
        1- interação : vet[1] = 2.2;
        2- interação : vet[2] = 3.3;
        3- interação : vet[3] = 4.4;
        4 -interação : vet[4] = 5.5;

        */
        printf(" *(f + %d) = %.1f", i, *(f + i));
        /*
        0- interação : *(f + 0) = 1.1
        1- interação : *(f + 1) = 2.2
        2- interação : *(f + 2) = 3.3
        3- interação : *(f + 3) = 4.4
        4 -interação : *(f + 4) = 5.5
 
        */
        printf(" &vet[%d] = %p", i, &vet[i]);
        /*
        0- interação : &vet[0] = 0x7fff8109dcb0       //endereço da posição 0
        1- interação : &vet[1] = 0x7fff8109dcb4       //endereço da posição 1
        2- interação : &vet[2] = 0x7fff8109dcb8       //endereço da posição 2
        3- interação : &vet[3] = 0x7fff8109dcbc       //endereço da posição 3
        4 -interação : &vet[4] = 0x7fff8109dcb0       //endereço da posição 4

        */
        printf(" (f + %d) = %p", i, f + i);
        /*
        0- interação : (f + 0) = 0x7fff8109dcb0       //endereço da posição 0
        1- interação : (f + 1) = 0x7fff8109dcb4       //endereço da posição 1
        2- interação : (f + 2) = 0x7fff8109dcb8       //endereço da posição 2
        3- interação : (f + 3) = 0x7fff8109dcbc       //endereço da posição 3
        4 -interação : (f + 4) = 0x7fff8109dcb0       //endereço da posição 4

        */
        printf("\n");
    }
    
    return 0;
}
