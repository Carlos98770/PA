#include <stdio.h>
#include <stdlib.h>
struct teste{
    int x = 3;
    char nome[] = "jose";
};


int main(void){

    struct teste *s;
    
    

    printf("%d" , s->x);
    printf("%s" , s->nome);

    return 0;
}