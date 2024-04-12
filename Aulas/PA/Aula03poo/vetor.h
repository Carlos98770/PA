#include <iostream>
#include <cmath>
class Vetor{
private:
    float x,y;

public:

     void print(){
        std:: cout << '(' << x << ',' << y << ')' << std::endl;
     }

     float norma(){
        float n;
        n = pow(pow(x,2) + pow(y,2),0.5);

        return n;

     }

     float angulo(){

        float a = atanf(y/x);
        float graus = (a*180)/3.14159265358979323846;

        return graus;

     }







    float getX(){
        return x;
    }
    float getY(){
        return y;
    }

    void setX(float x){
        this->x = x;
    }
    void setY(float y){
        this->y = y;
    }
};
