#include <stdio.h>

void multiplica_matrizes(int *A, int*B, int* C, int m , int n ,int z ){

}
void prencherMatriz(int A[][2], int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

}


int main(void){
    int m,n;
    scanf("%d", &m);
    scanf("%d", &n);

    int A[m][m];
    int B[m][n];

    prencherMatriz(A,m);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++)
            printf("%d ", A[i][j]);
        
        printf("\n");
    }   

    return 0;
}