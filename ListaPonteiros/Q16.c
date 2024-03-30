#include <stdio.h>
#include <stdlib.h>


/*void qsort (void* base, size_t num, size_t size, 
int (*compar)(const void*,const void*));*/

int compare( const void* a, const void* b){
    if( *(float*)a - *(float *)b < 0) return -1;
    if( *(float *)a - *(float *)b > 0) return 1;
    if( *(float*)a - *(float *)b == 0) return 0;

}

void prencherVetor(float *x, int n){
    float *vet = (float *)x;
    for(int i = 0; i < n; i++){
        float p;
        scanf("%f" , &p);
        vet[i] = p;
    }

}



void imprimirVetor(float* x, int n){
    float *vet = (float*) x;
    for(int i = 0; i < n; i++ )
        printf("%.2f " , vet[i]);

    printf(" \n");
    
}
    

int main(void){
    printf("Tamanho do vetor: \n");
    int n;
    scanf("%d" , &n);

    float *x;
    x = (float *) malloc(n * sizeof(float));  //Fazendo a alocação dinâmica
    prencherVetor(x,n); //Prenchendo o vetor

    qsort(x,n,sizeof(float),compare);   
    /*
        função sort, faz o ordenamento, recebe o vetor, o seu tamanho, o tamanho de cada elemento e a função compare.
        A função compare é usada como critério dentro do vetor.

    */


    imprimirVetor(x,n); //imprimir o vetor

    free(x); //libera a memória

    return 0;
}