#pragma once
#include <utility>

using namespace std;

//completar con todos los sets y gets q correspondan
class punto{
    private:
        pair<float, float> posicion;
    public:
        punto(){};
        punto(float x, float y);
        void setPos(pair<float, float> pos);
        pair<float, float> getPos();
};

class circulo{
    private:
        pair<float, float> posicion;
        float radio;
    public:
        circulo(){};
        circulo(float x, float y, float r);
        void setPos(pair<float, float> pos);
        pair<float, float> getPos();
        float getRadio(){return radio;}

};

class elipse{
    private:
        pair<float, float> pos_centro;
        float a; //semieje_mayor
        float b; //semieje_menor

    public:
        elipse(){};
        elipse(float a, float b);
        float geta(){return a;}
        float getb(){return b;}

};
class rectangulo{
    private:
        float pos_vertex;
        float ancho;
        float largo;
    public:
        rectangulo(){};
        rectangulo(float ancho, float largo);
        float getLargo(){return largo;}
        float getAncho(){return ancho;}
};
