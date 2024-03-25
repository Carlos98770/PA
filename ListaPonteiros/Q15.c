#include <stdio.h>
#include <stdlib.h>

void ordenar(void *x, int n,int tipo){
    if(tipo == 0){
        int *vet = (int*)x; //Preciso fazer a liberação??
        for(int i = 0; i < n;i++)
            for(int j = i+1; j < n;j++)
                if(vet[i] > vet[j]){
                    int aux = vet[j];
                    vet[j] = vet[i];
                    vet[i] = aux;
                }


    }else{                                      
        float *vet = (float*)x;
        for(int i = 0; i < n;i++)
            for(int j = i+1; j < n;j++)
                if(vet[i] > vet[j]){
                    float aux = vet[j];
                    vet[j] = vet[i];
                    vet[i] = aux;
                }

    }


}

void prencherVetor(void *x, int n, int tipo){
    if(tipo == 0){
        int *vet = (int *)x;
        for(int i = 0; i < n; i++){
            int p;
            scanf("%d" , &p);
            vet[i] = p;
        }
    }
    else{
        float *vet = (float *)x;
        for(int i = 0; i < n; i++){
            float p;
            scanf("%f" , &p);
            vet[i] = p;
        }

    }

}

void imprimirVetor(void* x, int n, int tipo){
    if(tipo == 0){
        int *vet = (int*) x;
        for(int i = 0; i < n; i++ )
            printf("%d " , vet[i]);
    
        printf(" \n");
        
    }
    else{
        float *vet = (float*) x;
        for(int i = 0; i < n; i++ )
            printf("%.2f " , vet[i]);
    
        printf(" \n");
        
    }
    
}
int main(void){

    float *x;
    printf("Tamanho do vetor: \n");
    int n;
    scanf("%d" ,&n);
    printf("0 para vetor inteiro e 1 para vetor float : \n");
    int tipo;
    scanf("%d", &tipo);

    x = (float *) malloc( n * sizeof(float));
    prencherVetor(x,n,tipo);
    

    ordenar(x,n,tipo);

    imprimirVetor(x,n,tipo);

    free(x);

    return 0;

}