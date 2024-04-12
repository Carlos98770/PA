#include <stdio.h>
#include <stdlib.h>
void prencherVetor(int *x,int m){
    for(int i = 0; i < m; i++){
        int p;
        scanf("%d" , &p);
        x[i] = p;
    }

}


void imprimirVetor(int *x, int m){
    for(int i = 0; i < m; i++)
        printf("%d " ,x[i]);

}

int main()
{
    int *x;
    size_t m;
    scanf("%d" , &m);
    x = (int*) malloc(m * sizeof(int));// retorna o endereço do bloco de tamanho 10*sizeof(int) = 40bytes


    prencherVetor(x , m);
    imprimirVetor(x, m);
    free(x); //liberar memoria alocada || Para cada malloc , tem seu free();
    //Estudar certinho malloc() e free()






    return 0;
}
