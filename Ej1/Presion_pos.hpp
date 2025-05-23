#include "MedicionBase.hpp"
#include "Imediciones.hpp"

using namespace std;

class Presion : public MedicionBase{
    public:
        float presionEstatica; //p
        float presionDinamica; //q
        Presion(float p, float q, float t);
};

class Posicion : public MedicionBase{
    public:
        float latitud;
        float longitud;
        float altitud;

        Posicion(float lat, float lon, float alt, float t);
};