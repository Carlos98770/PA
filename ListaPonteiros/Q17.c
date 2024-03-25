#include <stdio.h>
#include <stdlib.h>

int compare( const void* a,const  void* b){
      return *(int*)a - *(int *)b; 
   
}

void ordenarRapidao(int *x, int n, int (*pf)(const void*,const void*)){
    qsort(x,n,sizeof(int),pf);

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
    printf("Tamanho do vetor: \n");
    int n;
    scanf("%d" , &n);
    int *x;
    x = (int *) malloc(n * sizeof(int));

    prencherVetor(x,n,0);
    ordenarRapidao(x,n,compare);

    imprimirVetor(x,n,0);
    

    return 0;
}