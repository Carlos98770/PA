#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
    float x,y;

public:

    void print();
    float norma();
    float angulo();

    float getX();
    float getY();
    void setX(float x);
    void setY(float y);
};


#endif // VETOR2D_H
