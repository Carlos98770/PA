#include <stdio.h>
#include <stdlib.h>

int compare( const void* a,const  void* b){
      return *(int*)a - *(int *)b; 
   
}

void ordenarRapidao(int *x, int n, int (*pf)(const void*,const void*)){
    qsort(x,n,sizeof(int),pf);

}

void prencherVetor(int *x, int n){
    
    for(int i = 0; i < n; i++){
        int p;
        scanf("%d" , &p);
        x[i] = p;
        
    }
   

}

void imprimirVetor(int * x, int n){
    
    for(int i = 0; i < n; i++ )
        printf("%d " , x[i]);

    printf(" \n");
    
}

    


int main(void){
    printf("Tamanho do vetor: \n");
    int n;
    scanf("%d" , &n);
    int *x;
    x = (int *) malloc(n * sizeof(int));

    prencherVetor(x,n);
    ordenarRapidao(x,n,compare);

    imprimirVetor(x,n);
    

    return 0;
}