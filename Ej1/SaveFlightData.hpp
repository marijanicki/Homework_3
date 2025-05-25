#pragma once
#include "Imediciones.hpp"
#include "MedicionBase.hpp"
#include "Presion_pos.hpp"

using namespace std;

class SaveFlightData{
    public:
        Posicion posicion;
        Presion presion;

        SaveFlightData(){};
        SaveFlightData(const Posicion& p, const Presion& q):posicion(p), presion(q) {}
        void serializar(ofstream& out);
        void deserializar(ifstream& in);
        void imprimir();
};