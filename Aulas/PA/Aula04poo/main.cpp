#include <iostream>
#include "vetor2d.h"

int main()
{
    Vetor2d v;
    v.setX(0);
    v.setY(-1);
    v.print();
    float norma = v.norma();

    std::cout << "Norma: " << norma << std::endl;

    float angulo = v.angulo();

    std::cout << "Angulo com o eixo x(Graus): " << angulo << std::endl;


    return 0;
}

