
#include <stdio.h>
#include <stdlib.h>
void prencherMatriz(unsigned char m[8][8]){
    for(int i = 0; i < 8; i++)
        for(int j =0; j < 8; j++)
            m[i][j] = rand() %2 ;

}
void send(unsigned long int *a, unsigned char m[8][8]){
    for(int i =0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            *a = *a << 1;              
            *a = *a | m[i][j];

        }

    }
}


void imprimirMatriz(unsigned char m[8][8]){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++)
            printf("%d ", m[i][j]);
        
        printf("\n");
    }

}


int main() {
    
    unsigned char m[8][8];
    unsigned long int a = 0;
    unsigned long int *px = &a;

    prencherMatriz(m);
    imprimirMatriz(m);

    /*
        usando o deslocamento a esquerda é possivel concatenar os valores da matriz na variavel a
        o a na memoria armazena 64 bits ou seja : 00......000
        quando o deslocamento é realizado,
        os bits sao deslocados para esquerda e é acresentado um 0 no ultimo bit, e agora realizo um or bit a bit para o valor da matriz ser adicionado na variavel a.
        e assim faço para todos os casos

        Assim cada grupo de 8 bits da variavel int armazena cada linha da matriz
    
    
    */

    send(px,m);
    
    printf("Valores armazenado no long int a: ");
    for (int i = 63; i >= 0; i--) {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");
    
 
    
    return 0;
}
