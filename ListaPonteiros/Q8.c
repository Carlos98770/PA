#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[] = {4, 9, 13};
    int i;

    for(i=0;i<3;i++)            // pecorre o vetor, imprimindo os valores de vet
        printf("%d ", *(vet+i));


    for(i=0;i<3;i++)        // imprimir os valores dos ponteiros de cada posição
        printf("%X ",vet+i);
    


    return 0;
}