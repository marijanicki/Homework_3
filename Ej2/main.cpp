#include "figuras.hpp"
#include "templates.hpp"
#include <iostream>

using namespace std; 

int main(){
    circulo c(5,3);
    punto p(2,1);
    elipse e(8,5);
    rectangulo r(2,3);

    c.setRadio(5);
    e.setSemieje_Mayor(4);
    e.setSemieje_Menor(2);
    r.setAncho(2);
    r.setLargo(3);
    cout<<"Area Punto: "<<ProcesadorFigura<punto>::area()<<endl;
    cout<<"Area Circulo: "<<ProcesadorFigura<circulo>::area(c)<<endl;
    cout<<"Area Elipse: "<<ProcesadorFigura<elipse>::area(e)<<endl;
    cout<<"Area Rectangulo: "<<ProcesadorFigura<rectangulo>::area(r)<<endl;
}
