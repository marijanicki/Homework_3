#include "figuras.hpp"

punto::punto(float x, float y){
    posicion.first = x;
    posicion.second = y;
}
circulo::circulo(float x, float y, float r){
    posicion.first= x;
    posicion.second = y;
    this->radio = r;
}
elipse::elipse(float a, float b){
    this->a = a;
    this->b = b;
}
rectangulo::rectangulo(float ancho, float largo){
    this->ancho = ancho;
    this->largo = largo;
}