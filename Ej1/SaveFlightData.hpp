#include "Imediciones.hpp"
#include "MedicionBase.hpp"
#include "Presion_pos.hpp"

using namespace std;

class SaveFlightData{
    public:
        unique_ptr<Posicion> posicion;
        unique_ptr<Presion> presion;

        SaveFlightData(const Posicion& p, const Presion& q);
        void serializar(ofstream& out);
        void deserializar(ifstream& in);
        void imprimir();
};