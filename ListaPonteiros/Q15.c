#include <stdio.h>
#include <stdlib.h>

void ordenar(float *x, int n){                    
    float *vet = (float*)x;
    for(int i = 0; i < n;i++)
        for(int j = i+1; j < n;j++)
            if(vet[i] > vet[j]){
                float aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }

}




void prencherVetor(float *x, int n){
    for(int i = 0; i < n; i++){
        float p;
        scanf("%f" , &p);
        x[i] = p;
    }

}



void imprimirVetor(float* x, int n){
    for(int i = 0; i < n; i++ )
        printf("%.2f " , x[i]);

    printf(" \n");
        
    
    
}
int main(void){

    float *x;
    printf("Tamanho do vetor: \n");
    int n;
    scanf("%d" ,&n);
    

    x = (float *) malloc( n * sizeof(float));
    prencherVetor(x,n);
    

    ordenar(x,n);

    imprimirVetor(x,n);

    free(x);

    return 0;

}