#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int **a, int **b, int **c,int nla,int nca, int ncb){
    for(int i = 0; i < nla; i++){
        for(int j = 0; j < ncb; j++){
            int soma = 0;
            for(int w = 0; w < nca; w++){
                
                soma += a[i][w] * b[w][j];
            }
            c[i][j] = soma;
        }
    }



}




int **alocarMatriz(int nl, int nc){
    int **x;

    x = (int **) malloc( nl * sizeof(int *));
    x[0] = (int *) malloc( nl * nc * sizeof(int ));

    for(int i = 1; i < nl; i++)
        x[i] = x[i-1] + nc;

    return x;


}
void prencherMatriz(int **x, int nl, int nc){
    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++){
            int p;
            scanf("%d", &p);
            x[i][j] = p;

        }
}
void imprimirMatriz(int **x, int nl, int nc){
    for(int i = 0; i < nl; i++){
        for(int j = 0; j < nc; j++)
            printf("%d ", x[i][j]);
        
        printf("\n");
    }

}
void liberarMatriz(int **x){
    free(x[0]);
    free(x);

}


int main(void){
    int nla,nca,ncb;

    printf("Numero de Linhas da Matriz A: \n");
    scanf("%d" , &nla);
    printf("Numero de colunas da Matriz A: \n");
    scanf("%d" , &nca);
    printf("Numero de colunas da Matriz B: \n");
    scanf("%d" , &ncb);

    int **a = alocarMatriz(nla,nca);
    int **b = alocarMatriz(nca,ncb);
    int **c = alocarMatriz(nla,ncb);

    printf("Prenchar a matriz a: \n");
    prencherMatriz(a,nla,nca);

    printf("Prenchar a matriz b: \n");
    prencherMatriz(b,nca,ncb);

    multiplica_matrizes(a,b,c,nla,nca,ncb);
    printf("\n");
    printf("Resultado da Multiplicação \n");
    imprimirMatriz(c,nla,ncb);

    liberarMatriz(a);
    liberarMatriz(b);
    liberarMatriz(c);


    return 0;
}