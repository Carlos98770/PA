#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int compare( const void* a,const  void* b){
      return *(int*)a - *(int *)b; 
   
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

void ordenar(void *x, int n,int tipo){
    if(tipo == 0){
        int *vet = (int*)x;
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


int main(void){
    clock_t start,end;
    start = clock();
    float tempo1,tempo2;

    int *x;
    printf("Tamanho do vetor: \n");
    int n;
    scanf("%d" , &n);
    x = (int *)malloc( n * sizeof(int));
    prencherVetor(x,n,0);


    start = clock();
    qsort(x,n,sizeof(int),compare);
    end = clock();


    tempo1 = ((float) end - start)/CLOCKS_PER_SEC;

    start = clock();
    ordenar(x,n,0);
    end = clock();

    tempo2 = ((float) end - start)/CLOCKS_PER_SEC;

    printf("%f Tempo em s:(qsort()) \n",tempo1);
    printf("%f Tempo em s:(burblesort()) \n",tempo2);

    free(x);


    /*
            Conclusão: Os dois algoritmos foram criados para fazer a ordenação de dados
            a funcão qsort() se mostra mais eficiente a medida que o tamanho do vetor aumenta.
            já a minha função que usa o bubble sort, tende a perder desempenho a medida que o tamanho do vetor aumenta.




    */

    return 0;
}