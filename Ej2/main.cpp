#include "figuras.hpp"
#include "templates.hpp"
#include <iostream>

using namespace std; 

int main(){
    circulo c(5,3,5);
    punto p(2,1);
    elipse e(4,2);
    rectangulo r(2,3);
    //ProcesadorFigura<punto> procpunto;
    //ProcesadorFigura<circulo> procC;
    cout<<ProcesadorFigura<punto>::area()<<endl;
    cout<<ProcesadorFigura<circulo>::area(c)<<endl;
    cout<<ProcesadorFigura<elipse>::area(e)<<endl;
    cout<<ProcesadorFigura<rectangulo>::area(r)<<endl;
    
}
