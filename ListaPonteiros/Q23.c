#include <stdio.h>
#define TAM 10
#include <time.h>

int funcao1(int vetor[], int v) {
    int i;
    for (i = 0; i < TAM; i++) {
        if (vetor[i] == v)
            return i; //7
    }
    return -1;
}



int funcao2(int vetor[], int v, int i, int f) { //v = 15, i =0, f = 10 -1;
    int m = (i + f) / 2; //= //(0 + 9)/2 = 4
    if (v == vetor[m]) // 15 = vetor[4](9) // 0
        return m;
    if (i >= f)   //0
        return -1;
    if (v > vetor[m]) // 15 > vetor[4](9) = 1
        return funcao2(vetor, v, m + 1, f); // Corrigido m+l para m + 1
    else
        return funcao2(vetor, v, i, m - 1);
}

int main() {
    clock_t start,end;
    float tempo1,tempo2;


    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    start = clock();
    printf("%d \n" , funcao1(vetor, 19) );
    end = clock();

    tempo1 = ((float) end - start)/CLOCKS_PER_SEC;

    start = clock();
    printf("%d \n" , funcao2(vetor, 19, 0, TAM - 1) );
    end = clock();

    tempo2 = ((float) end - start)/CLOCKS_PER_SEC;


    printf("Tempo funcao1 = %f\nTempo funcao2= %f" , tempo1, tempo2);
   
    return 0;


    /*I. O resultado da impressão na linha 24 é: 7 - 7
    As duas funções é responsáveis encontrar o valor passado por paramentro, retornando o indice do vetor
    como o vetor é o mesmo para as duas funções o resultado é 7 - 7;



    II. A função funcao1, no pior caso, é uma estratégia mais rápida do que a funcao2.
    Em nenhum caso a funcao 1 será mais rapida, pois nesses algoritmos de busca, a complexidade importa
    na funcao 1, a complexidade é linear ou seja complexidade n, onde n é o tamanho do vetor
    já na funcao 2, a complexidade é log2(n), onde log2(n) < n.


    III. A função funcao2 implementa uma estratégia iterativa na concepção do algoritmo.
    Falso, funcao 2 implementa um estratégia recursiva

    */

}
