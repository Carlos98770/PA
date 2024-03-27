#include <stdio.h>
#include <stdlib.h>

//https://embarcados.com.br/bits-em-linguagem-c/
/*
^ operador xor bit-bit
| operador or bit-bit
& operador and bit-bit
>> deslocamento a direita, divide por dois a cada shift
<< deslocamento a esquerda,multiplica por dois a cada shift
*/



int main(void){
    int a, b;
    int x, y, z;

    scanf("%d %d", &a, &b); // 10, 1
    x = a;   // x = 10
    y = b;   //y = 1
    z = a + b;  // z = 11
                 
                 //exemplo de como irá funcionar o progama para primeira interacao
    while (a) {      // a = 10
        x = x | b;    // x = 1010 or 0001 = 1011
        y = y ^ a;    // y = 0001 xor 1010 = 1011
        z = z & (a + b);  // z = 1011 and 1011 = 1011
        a = a >> 1;  // a = 10 / 2 = 5
        b = b << 1;  // b = 2 * 1 = 2
    

    }
    
    printf("%d %d %d \n", x, y, z);
    //Saída do progama: x = 15, y = 13, z = 0
    


    return 0;
}