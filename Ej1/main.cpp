#include "Imediciones.hpp"
#include "MedicionBase.hpp"
#include "Presion_pos.hpp"
#include "SaveFlightData.hpp"
#include<iostream>
using namespace std;

int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData FlightData(posicion,presion), FlightData_deserializada;

    ofstream out("FlightData.dat",ios::binary);
    if(out.is_open()){
        FlightData.serializar(out);
        out.close();
    }
    ifstream in("FlightData.dat", ios::binary);
    if(in.is_open()){
        FlightData_deserializada.deserializar(in);
        in.close();
    }
    FlightData_deserializada.imprimir();
}