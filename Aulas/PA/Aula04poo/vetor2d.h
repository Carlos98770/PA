#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
    float x,y;

public:
    //Construtor da Classe sem argumentos
    Vetor2d();

    //Construtor Com argumentos
    Vetor2d(float a, float b);

    //Destrutor da Classe, invocado automaticamente
    ~Vetor2d();


    void print();
    void norma();
    void angulo();

    float getX();
    float getY();
    void setX(float x);
    void setY(float y);



};


#endif // VETOR2D_H
