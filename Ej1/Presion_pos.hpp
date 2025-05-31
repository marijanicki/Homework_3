#pragma once
#include "MedicionBase.hpp"
#include "Imediciones.hpp"

using namespace std;

class Presion : public MedicionBase{
    public:
        float presionEstatica; //p
        float presionDinamica; //q
        Presion(){};
        Presion(float p, float q, float t);
        //Deep copy constructor
        Presion(const Presion& q);
        void serializar(ofstream& out)const override;
        void deserializar(ifstream& in) override;
        virtual void imprimir()override;
};

class Posicion : public MedicionBase{
    public:
        float latitud;
        float longitud;
        float altitud;

        Posicion(){};
        Posicion(float lat, float lon, float alt, float t);
        //Deep copy constructor
        Posicion(const Posicion& p);
        void serializar(ofstream& out)const override;
        void deserializar(ifstream& in) override;
        virtual void imprimir()override;
};