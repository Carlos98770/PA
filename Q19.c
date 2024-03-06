#include <stdio.h>

void soma_vetores(int vet1[], int vet2[], int resultado[],int n){
    for(int i = 0; i < n; i++)
        resultado[i] = vet1[i] + vet2[i];
    
}



int main(){
    int n;
    printf("digite o tamanho do vetor: \n");
    scanf("%d", &n);
    int vet1 [n];
    int vet2 [n];
    int resultado [n];
    for(int i = 0; i < n; i++)
        scanf("%d" , &vet1[i]);
    
    for(int i = 0; i < n; i++)
        scanf("%d" , &vet2[i]);


    
    soma_vetores(vet1, vet2, resultado, n);
    printf("Resultado da Soma Vetorial: ");
    for(int i = 0; i < n; i++)
        printf("%d ", resultado[i]);

    
    return 0;
}   