#include <iostream>
#include "vetor.h"

int main()
{
    Vetor v;
    v.setX(7);
    v.setY(5);
    v.print();
    float norma = v.norma();

    std::cout << "Norma: " << norma << std::endl;

    float angulo = v.angulo();

    std::cout << "Angulo com o eixo x(Graus): " << angulo << std::endl;


    return 0;
}
