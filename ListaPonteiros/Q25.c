#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int ***alocarMatriz(int np,int nl,int nc){

    int ***m;
    m = (int ***) malloc( np * sizeof(int **)); //Reservando o vetor principal

    m[0] = (int **) malloc(np * nl *sizeof(int*)); // Reservando o vetor secundário
    m[0][0] = (int *) malloc (np*nl*nc *sizeof(int));  //Reservando o vetor Terciário

    for(int i =1; i < np;i++)
        m[i] = m[i-1] + nl;   // alocando a 2D

                                        
    for(int j = 1; j < np*nl;j++)
        m[0][j] = m[0][j-1] + j*nc; // alocando a 3D

    
    return m;


}


void prencherMatriz(int ***m,int np,int nl,int nc){
     srand(1);
    for(int i =0; i < np;i++)
        for(int j =0; j < nl;j++)
            for(int k =0; k < nc;k++)
                m[i][j][k] = rand() %2;



}
void imprimirPlano(int ***matriz, int plano, int nl, int nc) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%d ", matriz[i][j][plano]);
        }
        printf("\n");
    }
}

int main(void){
    printf("Digite as dimensões da matriz 3D: ");
    int np,nl,nc;
    scanf("%d %d %d" , &np, &nl,&nc);



    int ***m = alocarMatriz(np,nl,nc);
    prencherMatriz(m,np,nl,nc);

                                                    // x  y   
    //exemplo de imprimir um plano, imprimir xy logo m[i][j][fixado]
    //imprimir outro plano tem que modificar os argumentos da função
    
    imprimirPlano(m,0,np,nl);

    //Acessando a matriz e modificando um valor

    m[0][2][0] = 300;

    printf("\n");
    imprimirPlano(m,0,np,nl);



///liberar memoria
    free(m[0][0]); //3D
    free(m[0]);   //2D
    free(m);     //1D
    

    return 0;
}