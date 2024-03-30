#include <stdio.h>
#include <stdlib.h>

int ***alocarMatriz(int np,int nl,int nc){
    int ***m;
    np = 2;
    nl = 3;
    nc = 4;
    m = (int ***) malloc( np * sizeof(int **));

    m[0] = (int **) malloc(np * nl *sizeof(int*));
    m[0][0] = (int *) malloc (np*nl*nc *sizeof(int));

    for(int i =1; i < np;i++)
        m[i] = m[i-1] + nl;

    for(int i = 0; i < np; i++)
        for(int j = 0; j < np*nl;j++)
            m[i][j] = m[0][0] + j*nc;

    
    return m;


}


void prencherMatriz(int ***m,int np,int nl,int nc){
    for(int i =0; i < np;i++)
        for(int j =0; j < nl;j++)
            for(int k =0; k < nc;k++)
                m[i][j][k] = rand() %2;



}

int main(void){
    printf("Digite as dimensões da matriz 3D: ");
    int np,nl,nc;
    scanf("%d %d %d" , &np, &nl,&nc);



    int ***m = alocarMatriz(np,nl,nc);
    prencherMatriz(m,np,nl,nc);


    printf("PLANO XY \n");
    for(int i = 0; i< np;i++){
        for(int j =0 ; j< nl;j++)
           printf("%d" , *(m[i][j]));

        printf("\n");
    }

    


///liberar memoria

    free(m[0]);
    free(m);    
    

    return 0;
}