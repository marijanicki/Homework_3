#include "Presion_pos.hpp"
#include "MedicionBase.hpp"
#include "Imediciones.hpp"
#include <iostream>
#include<memory>

using namespace std;

Presion::Presion(float p, float q, float t){
    this->presionEstatica = p;
    this->presionDinamica = q;
    this->tiempoMedicion = make_unique<float>(t);
};

Presion::Presion(const Presion& q){
    this->presionEstatica = q.presionEstatica;
    this->presionDinamica = q.presionDinamica;
    this->tiempoMedicion = make_unique<float>(*q.tiempoMedicion);
}
void Presion::serializar(ofstream& out)const {
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char*>(&presionEstatica),sizeof(float));
    out.write(reinterpret_cast<const char*>(&presionDinamica),sizeof(float));
    //out.write(reinterpret_cast<const char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}

void Presion::deserializar(ifstream& in){
    //tiempoMedicion = make_unique<float>(0);
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
    //in.read(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}

void Presion::imprimir(){
    cout <<"Presión Estática: " <<presionEstatica<<"\nPresión Dinámica: "<<presionDinamica<<"\nTiempo Medición: "<<*tiempoMedicion<<endl;
}

Posicion::Posicion(float lat, float lon, float alt, float t){
    this->latitud = lat;
    this->longitud = lon;
    this->altitud = alt;
    this->tiempoMedicion = make_unique<float>(t);
}

//deep copy constructor
Posicion::Posicion(const Posicion& p){
    this->latitud = p.latitud;
    this->longitud = p.longitud;
    this->altitud = p.altitud;
    this->tiempoMedicion = make_unique<float>(*p.tiempoMedicion);
}

void Posicion::serializar(ofstream& out)const {
    out.write(reinterpret_cast<const char*>(&latitud),sizeof(float));
    out.write(reinterpret_cast<const char*>(&longitud),sizeof(float));
    out.write(reinterpret_cast<const char*>(&altitud),sizeof(float));
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}

void Posicion::deserializar(ifstream& in){
    tiempoMedicion = make_unique<float>(0);
    in.read(reinterpret_cast<char*>(&latitud),sizeof(float));
    in.read(reinterpret_cast<char*>(&longitud),sizeof(float));
    in.read(reinterpret_cast<char*>(&altitud),sizeof(float));
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}

void Posicion::imprimir(){
    cout<<"Latitud: "<<latitud<<"\nLongitud: "<<longitud<<"\nAltitud: "<<altitud<<"\nTiempo Medición: "<<*tiempoMedicion<<endl;
}