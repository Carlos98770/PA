#include <stdio.h>

int main(void){
    int m = 2;
    int A[m][m] = {{1,2},{2,3}};

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++)
            printf("%d ", A[i][j]);
            
    }
    return 0;
}