#pragma once
#include <utility>

using namespace std;

//clase abstracta para las posiciones de las figuras
class figuras{
    protected:
        pair<float, float> posicion;
    public:
        figuras(float x, float y);
        virtual void setPos(pair<float, float> pos);
        virtual pair<float, float> getPos();
};

class punto:public figuras{
    public:
        punto(float x, float y);
};

class circulo:public figuras{
    private:
        float radio;
    public:
        circulo(float x, float y);
        void setRadio(float r);
        float getRadio();

};

class elipse:public figuras{
    private:
        float a; //semieje_mayor
        float b; //semieje_menor

    public:
        elipse(float a, float b);
        void setSemieje_Mayor(float a);
        void setSemieje_Menor(float b);
        float geta();
        float getb();
};
class rectangulo:public figuras{
    private:
        float ancho;
        float largo;
    public:
        rectangulo(float ancho, float largo);
        void setLargo(float largo);
        float getLargo();
        void setAncho(float ancho);
        float getAncho();
};
