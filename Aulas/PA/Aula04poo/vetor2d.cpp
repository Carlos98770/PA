#include <iostream>
#include <cmath>
#include "vetor2d.h"

//Metódo print() no escopo da Classe Vetor2d

 Vetor2d::Vetor2d(){
    x = 0;
    y = 0;


 };
 Vetor2d::Vetor2d(float a, float b)
 {
     x = a;
     y = b;
 }


void Vetor2d::print(){
    std:: cout << '(' << x << ',' << y << ')' << std::endl;
     }

void Vetor2d::norma(){
    float n;
    n = pow(pow(x,2) + pow(y,2),0.5);

    std::cout << "Norma: " << n << std::endl;

     }

void Vetor2d::angulo(){

    float a = atan2(y,x);
    float graus = (a*180)/3.14159265358979323846;

    std::cout << "Angulo com o eixo x(Graus): " << graus << std::endl;

 }
 float Vetor2d::getX(){
    return x;
}
float Vetor2d::getY(){
    return y;
}

void Vetor2d::setX(float x){
    this->x = x;
}
void Vetor2d::setY(float y){
    this->y = y;


//Erro no destrutor da Classe
Vetor2d::~Vetor2d(){


}





}
