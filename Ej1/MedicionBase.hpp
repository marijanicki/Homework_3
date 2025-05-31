#pragma once
#include "Imediciones.hpp"
#include <memory>

using namespace std;

class MedicionBase : public Imediciones{
    protected:
        unique_ptr<float> tiempoMedicion;
    public:
        MedicionBase(){};
        float getTiempo();
        void serializar(ofstream& out)const override;
        void deserializar(ifstream& in) override;
        virtual void imprimir()=0;
};