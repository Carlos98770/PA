#include <stdio.h>
/*
void multiplica_matrizes(int *pA,int *pB,int *pC, int x, int y, int z){
    //B[y][z]
    //A[x][y]







}
*/


void prencherMatriz(int *pa, int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", pa);
            pa++;
        }
            
    }
}


void imprimirMatriz(int *pa, int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", *pa);
            pa++;
        }

        printf("\n");
    }

}


int main(void){
    int m; 
    scanf("%d" , &m);
    int A[m][m];
    int *pa;
    pa = A[0];

    prencherMatriz(pa,m);
    a(pa,m);
    //imprimirMatriz(pa,m);
    

    



    return 0;
}