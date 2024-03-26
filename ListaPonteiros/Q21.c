#include <stdio.h>
#include <stdlib.h>


int main(void){
    /*
    //C
    int f(char *data) {
        void *s;
        s = malloc(50);
        int size = strlen(data);
        if (size > 50)
            return -1;     //O erro está aqui, pois apenas retorna e não fará a limpeza da memoria.
        free(s);
        return 0;
    }
    */

    //D
    /*
    void f(int b){
        char *m = malloc(10);
        char *n = malloc(10);
        free(m);
        m = n;
        free(m);  
        free(n); // Aqui ocorre o double free, pois m e n estão armazenando o mesmo bloco de memória
}



    */
    




    


    return 0;
}