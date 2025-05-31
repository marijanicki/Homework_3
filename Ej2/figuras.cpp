#include "figuras.hpp"

figuras::figuras(float x, float y){
    posicion.first = x;
    posicion.second = y;
}

void figuras::setPos(pair<float, float> pos){
    posicion = pos;
}

pair<float, float> figuras::getPos(){
    return posicion;
}
punto::punto(float x, float y):figuras(x,y){}

circulo::circulo(float x, float y):figuras(x,y){}

void circulo::setRadio(float r){
    this->radio = r;
}

float circulo::getRadio(){
    return radio;
}

elipse::elipse(float x, float y): figuras(x,y){}

void elipse::setSemieje_Mayor(float a){
    this->a = a;
}

float elipse::geta(){
    return a;
}

void elipse::setSemieje_Menor(float b){
    this->b = b;
}

float elipse::getb(){
    return b;
}

rectangulo::rectangulo(float x, float y):figuras(x,y){}

void rectangulo::setAncho(float ancho){
    this->ancho = ancho;
}

float rectangulo::getAncho(){
    return ancho;
}

void rectangulo::setLargo(float largo){
    this->largo = largo;
}
float rectangulo::getLargo(){
    return largo;
}