#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i =3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    //p == &i;   Valor será 1, pois p armazena o endereço de i;
    //*p - *q;  3 - 5 = -2,m pois o * aplicado a um ponteiro retorna o valor daquele endereço
    //**&p;  valor 3, pois o endereço de p armazena o endereço de i, e o valor do endereço de i é 3
    //3 - *p/(*q) + 7;  valor = 10, pois a divisão inteira *p/(*q) = 0; 



    return 0;
}