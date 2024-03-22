#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i=5, *p;
    p = &i;

    printf("%p %p %d %d %d %d\n", p // 4094, o endereço de i;
    
    , p+1   // 4096, já que o inteiro nessa arquiterura possui 2 bytes 4094 + 2 = 4096;
    
    , *p+2 // 5 + 2 = 7, valor i + 2;
    
    , **&p // 5, o &p é o endereco de p, já *&p é o seu valor e **&p é o valor do endereço armazenado em p que é 5
    
    , 3**p // 15, valor do endereço guardado em p vezes 3;
    
    , **&p+4 // 5 + 4 = 9; a expressao **&p, retorna o proprio valor de i
    
    ;
    
    
    



    return 0;

}

