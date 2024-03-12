#include <stdio.h>

int main(void){
    int i = 3,j = 3, *p,*q;
    p = &i;
    q = &j;
    i = (*p)++ + *q;
    
    printf("%d \n" , i);
    
    return 0;
}