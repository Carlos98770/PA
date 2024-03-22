#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* 
        
        Aqui será mostrado 20, pois há mudança do valor;
    
    
     (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);

    


    /* 
        Mostrará 29.0, com uma casa decimal;
    
    
     (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);


    /* 
    
    
        Mostrará P, pois é o char na primeira posição do vetor;


    (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);


    /*
    

        Mostrará e, pois é o char na quarta posição do vetor;
    
    
    d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    /* 
    
         Mostrará P, pois após fazer a atribuição, o *p mostrará o elemento da posição 0;
    
    
    (e) */
    p3 = nome;
    printf("%c \n", *p3);


    /* 
    
        Mostrará e,posição 0 + 4 , então mostrará o valor do elemento de posição 4;
    
    
    f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);


    /*
    
         Mostrará t, após diminuir 1 de p3, voltamos uma posição do vetor de char
    
    (g) */
    p3--;
    printf("%c \n", *p3);


    /*
    
        31, pois quando fazemos a atribuição p4 = vetor, guardamos em p4 um ponteiro para
        primeira posição do vetor;
    
    
     (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* 
    
        45, após o incremento, pegamos a posição 1 do vetor;
    
    (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);


    /* 
        27, agora ha 2 incrementos;
    
    (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);



    /* 
    
        31, retirando 2, voltamos a posição 0;
        exemplo: o ponteiro da posição e 16, apos subtrair 2, voltamos para 8 que é o endereço do vetor[0]
    
    (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* 
    
        45, guardando endereço de vetor[2] - 1, resulta no valor de vetor[1];
    
    (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* 
    
        27, pois p5 irá apontar para memoria posterior
    (n) */
    p5++;
    printf("%d \n", *p5);

    return 0;
}