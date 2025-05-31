#pragma once
#include "figuras.hpp"
#define PI 3.14


template<typename T>
class ProcesadorFigura {};

template<>
class ProcesadorFigura <punto>{
    public:
        static float area(){return 0;};
};

template<>
class ProcesadorFigura<circulo>{
    public:
        static float area(circulo fig_circulo){return PI*fig_circulo.getRadio()*fig_circulo.getRadio();}
};

template<>
class ProcesadorFigura <elipse>{
    public:
        static float area(elipse fig_elipse){return PI*fig_elipse.geta()*fig_elipse.getb();};
};

template<>
class ProcesadorFigura<rectangulo>{
    public:
        static float area(rectangulo fig_rec){return fig_rec.getLargo()*fig_rec.getAncho();}
};
