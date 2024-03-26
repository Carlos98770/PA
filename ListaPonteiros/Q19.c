/*
Nome: <Carlos Eduardo Medeiros da Silva>
Matricula: <20220010155>

*/

#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int *vet1, int *vet2, int *resultado,int n){
    for(int i = 0; i < n; i++)
        resultado[i] = vet1[i] + vet2[i];
    
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
    


int main(){

    printf("digite o tamanho do vetor: \n");
    int n;
    scanf("%d", &n);
    int *vet1;
    int *vet2;
    int *resultado;
    
    vet1 = (int *) malloc( n * sizeof(int));
    vet2 = (int *)malloc( n * sizeof(int));
    resultado = (int *)malloc( n * sizeof(int));

    printf("Elemento de v1: \n");
    prencherVetor(vet1 , n,0);
    printf("Elemento de v2: \n");
    prencherVetor(vet2 , n,0);
    
    soma_vetores(vet1, vet2, resultado, n);
    printf("Elementos do vetor resultante: ");
    imprimirVetor(resultado,n,0);
    
    free(vet1);
    free(vet2);
    

    
    return 0;
}   