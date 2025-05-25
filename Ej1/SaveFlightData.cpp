
#include "SaveFlightData.hpp"
#include "Imediciones.hpp"
#include "MedicionBase.hpp"
#include "Presion_pos.hpp"
#include<iostream>
using namespace std;

void SaveFlightData::serializar(ofstream& out){
    posicion.serializar(out);
    presion.serializar(out);
}
void SaveFlightData::deserializar(ifstream& in){
    posicion.deserializar(in);
    presion.deserializar(in);
}
void SaveFlightData::imprimir(){
    cout<<"Posición: "<<endl;
    posicion.imprimir();
    cout<<"\nPresión: "<<endl;
    presion.imprimir();
}
