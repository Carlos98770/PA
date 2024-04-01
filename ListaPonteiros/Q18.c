#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int compare( const void* a,const  void* b){
      return *(int*)a - *(int *)b; 
   
}

void prencherVetor(int *x, int n){
    for(int i = 0; i < n; i++){
        x[i] = rand();
        
    }
    
}

void imprimirVetor(int* x, int n){
    for(int i = 0; i < n; i++ )
        printf("%d " , x[i]);

    printf(" \n");
        
    }
    
void ordenar(int *x, int n){
    
    for(int i = 0; i < n;i++)
        for(int j = i+1; j < n;j++)
            if(x[i] > x[j]){
                int aux = x[j];
                x[j] = x[i];
                x[i] = aux;
            }


    }

int main(void){
    clock_t start,end;
    float tempo1,tempo2;

    int *x;
    printf("Tamanho do vetor: \n");
    int n;
    scanf("%d" , &n);
    x = (int *)malloc( n * sizeof(int));
    prencherVetor(x,n);


    start = clock();
    qsort(x,n,sizeof(int),compare);
    end = clock();


    tempo1 = ((float) end - start)/CLOCKS_PER_SEC; // dividindo pelo ciclo de clock para obter a resposta em segundos

    start = clock();
    ordenar(x,n);
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