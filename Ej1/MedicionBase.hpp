#pragma once
#include "Imediciones.hpp"
#include <memory>

using namespace std;

class MedicionBase : public Imediciones{
    protected:
        unique_ptr<float> tiempoMedicion;
    public:
        MedicionBase(){};
        float getTiempo(){return *tiempoMedicion.get();}
        void serializar(ofstream& out)const override{
            out.write(reinterpret_cast<const char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));    
        }
        void deserializar(ifstream& in) override{
            tiempoMedicion = make_unique<float>(0);
            in.read(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
        }
        virtual void imprimir()=0;
};