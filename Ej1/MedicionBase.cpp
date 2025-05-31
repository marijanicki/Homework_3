#include "MedicionBase.hpp"

float MedicionBase::getTiempo(){
    return *tiempoMedicion.get();
}
void MedicionBase::serializar(ofstream& out)const{
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));    
}
void MedicionBase::deserializar(ifstream& in){
    tiempoMedicion = make_unique<float>(0);
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}