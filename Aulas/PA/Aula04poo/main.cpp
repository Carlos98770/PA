#include <iostream>
#include "vetor2d.h"

int main()
{
    Vetor2d v1,v2(3,5);
    v1.setX(0);
    v1.setY(-1);

    v1.print();
    v2.print();

    v2.norma();





    return 0;
}

