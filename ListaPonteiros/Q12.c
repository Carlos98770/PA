#include <stdio.h>
#include <stdlib.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value; //Expresão válida


    scanf("%f", &aloha); // Expressão válida, mas não é necessário colocar o &

    aloha = "value"; // Expressão inválida, aloha é um vetor de Floats, portanto essa atribuição é sem sentido

    printf("%f", aloha);//Expressão inválida, o argumento do printf teria que ser "%p"

    coisas[4][4] = aloha[3];//Expressão válida

    coisas[5] = aloha;//Expressão inválida, está tentando atribuir um ponteiro a uma valor da matriz coisas

    pf = value; // Expressão inválida, está tentando atribuir um valor a um ponteiro

    pf = aloha; //Expressão válida


    return 0;
}